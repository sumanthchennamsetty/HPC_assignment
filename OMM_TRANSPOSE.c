#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <omp.h>
#include <time.h>


// Function to allocate memory for a matrix
int **allocateMatrix(int rows, int cols) {
    int **matrix = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }
    return matrix;
}

// Function to multiply two matrices
int **matrixMultiply(int **A, int **B, int rows_A, int cols_A, int cols_B) {
    int **result = allocateMatrix(rows_A, cols_B);

    for (int i = 0; i < rows_A; i++) {
        for (int j = 0; j < cols_B; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols_A; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return result;
}

// Function to raise a matrix to the power of 2^n by matrix multiplication
int **matrixPower(int **matrix, int n, int rows, int cols) {
    if (n == 0) {
        // Identity matrix (A^0 is an identity matrix)
        int **identity = allocateMatrix(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                identity[i][j] = (i == j) ? 1 : 0;
            }
        }
        return identity;
    } else if (n % 2 == 0) {
        // If n is even, A^n = (A^(n/2)) * (A^(n/2))
        int **halfPower = matrixPower(matrix, n / 2, rows, cols);
        int **result = matrixMultiply(halfPower, halfPower, rows, cols, cols);
        free(halfPower);
        return result;
    } else {
        // If n is odd, A^n = A * (A^(n-1))
        int **prevPower = matrixPower(matrix, n - 1, rows, cols);
        int **result = matrixMultiply(matrix, prevPower, rows, cols, cols);
        free(prevPower);
        return result;
    }
}

int main() {
    int rows;
    int cols;
    int power = 16; //4,10,16
    struct timeval tv1, tv2;
    struct timezone tz;
    double elapsed;

    /*printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);*/

    //printf("power: ");
    //scanf("%d", &power);

    int num_threads; //4,10,16
    //printf("number of threads: ");
    //scanf("%d", &num_threads);

for (int n = 512; n<=2048 ; n = n*2 ) {
    rows = n;
    cols = n;
    printf("size: %d \n",n);
    for (int i = 4; i<=16 ; i=i+6) {
        num_threads = i;
        printf("threads: %d", num_threads);

        omp_set_num_threads(num_threads);

        if (rows <= 0 || cols <= 0 || power < 0) {
            printf("Invalid input.\n");
            return 1;
        }

        int **matrix = allocateMatrix(rows, cols);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = rand() % 100;
            }
        }

        // Transpose the matrix by raising it to the power of 2^power
        gettimeofday(&tv1, &tz);
        int **transposedMatrix = matrixPower(matrix, power, rows, cols);

        gettimeofday(&tv2, &tz);
        elapsed = (double)(tv2.tv_sec - tv1.tv_sec) + (double)(tv2.tv_usec - tv1.tv_usec) * 1.e-6;
        printf("elapsed time = %f seconds.\n", elapsed);


}
}


    return 0;
}




