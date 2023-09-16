#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <sys/time.h>

int main() {

    int size = 2048;
    int numThreads;
	printf("Enter the number of threads: ");
  	scanf("%d", &numThreads);
    int blockSize = 64;

    //printf("size: %d\n", size);
    //printf("numThreads: %d\n", numThreads);
    //printf("blockSize: %d\n", blockSize);

    // Change the type of A, B, and C to int **
    int **A = (int**)malloc(size * sizeof(int*));
    int **B = (int**)malloc(size * sizeof(int*));
    int **C = (int**)malloc(size * sizeof(int*));

    for (int i = 0; i < size; i++) {
        A[i] = (int*)malloc(size * sizeof(int));
        B[i] = (int*)malloc(size * sizeof(int));
        C[i] = (int*)malloc(size * sizeof(int));
    }

    struct timeval tv1, tv2;
    double elapsed;

    omp_set_num_threads(numThreads);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A[i][j] = 2;
            B[i][j] = 2;
            C[i][j] = 0;
        }
    }

    gettimeofday(&tv1, NULL);

    #pragma omp parallel for collapse(2)
    for (int ii = 0; ii < size; ii += blockSize) {
        for (int jj = 0; jj < size; jj += blockSize) {
            for (int kk = 0; kk < size; kk += blockSize) {
                for (int i = ii; i < ii + blockSize && i < size; i++) {
                    for (int j = jj; j < jj + blockSize && j < size; j++) {
                        for (int k = kk; k < kk + blockSize && k < size; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }
    }

    gettimeofday(&tv2, NULL);
    elapsed = (double)(tv2.tv_sec - tv1.tv_sec) + (double)(tv2.tv_usec - tv1.tv_usec) * 1e-6;
    printf("elapsed time = %f seconds.\n", elapsed);

    // Free dynamically allocated memory
    for (int i = 0; i < size; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}
