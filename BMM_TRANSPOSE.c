#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <omp.h>


// Function to multiply two submatrices using ordinary matrix multiplication
void blockMatrixMultiplication(int N, int **A, int **B, int **C, int row_start, int col_start, int k_start, int block_size) {
    int i, j, k;

    for (i = row_start; i < row_start + block_size; ++i) {
        for (j = col_start; j < col_start + block_size; ++j) {
            C[i][j] = 0;
            for (k = k_start; k < k_start + block_size; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to perform block matrix multiplication
void blockMatrixMultiplicationParallel(int N, int **A, int **B, int **C, int block_size) {
    int i, j, k;

    #pragma omp parallel for private(i, j, k)
    for (i = 0; i < N; i += block_size) {
        for (j = 0; j < N; j += block_size) {
            for (k = 0; k < N; k += block_size) {
                blockMatrixMultiplication(N, A, B, C, i, j, k, block_size);
            }
        }
    }
}

// Function to initialize a matrix with values
void initializeMatrix(int N, int **matrix, int value) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = value;
        }
    }
}

// Function to perform matrix power using BMM
void matrixPower(int N, int **A, int **result, int exponent, int block_size) {
    // Initialize the result matrix with the identity matrix
    initializeMatrix(N, result, 1);

    int **temp = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; ++i) {
        temp[i] = (int *)malloc(N * sizeof(int));
    }

    // Perform matrix multiplication exponent times
    for (int i = 0; i < exponent; i++) {
        blockMatrixMultiplicationParallel(N, result, A, temp, block_size);

        // Swap the result and temp matrices
        int **temp_swap = result;
        result = temp;
        temp = temp_swap;
    }

    // Copy the final result to the output matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i][j] = temp[i][j];
        }
    }

    // Free dynamically allocated memory
    for (int i = 0; i < N; i++) {
        free(temp[i]);
    }
    free(temp);
}

int main() {

    int N = 512;
    int exponent = 2;
    int numThreads = 16;
    printf("threads: ");
    scanf("%d", &numThreads);
    int block_size = 4;

    int** A = (int**)malloc(N * sizeof(int*));
    int** result = (int**)malloc(N * sizeof(int*));

    for (int i = 0; i < N; i++) {
        A[i] = (int*)malloc(N * sizeof(int));
        result[i] = (int*)malloc(N * sizeof(int));
    }

    // Initialize matrix A (you can modify this part as needed)
    initializeMatrix(N, A, 2);

    // Set the number of OpenMP threads
    omp_set_num_threads(numThreads);

    struct timeval tv1, tv2;
    double elapsed;

    gettimeofday(&tv1, NULL);

    // Compute the power of matrix A using BMM
    matrixPower(N, A, result, exponent, block_size);

    gettimeofday(&tv2, NULL);
    elapsed = (double)(tv2.tv_sec - tv1.tv_sec) + (double)(tv2.tv_usec - tv1.tv_usec) * 1e-6;
    printf("Elapsed time = %f seconds.\n", elapsed);

    // Free dynamically allocated memory
    for (int i = 0; i < N; i++) {
        free(A[i]);
        free(result[i]);
    }
    free(A);
    free(result);

    return 0;
}
