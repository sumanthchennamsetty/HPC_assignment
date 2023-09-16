#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <sys/time.h>
#include <time.h>

#define N 2048

int A[N][N];
int B[N][N];
int C[N][N];

int main() 
{
    int i,j,k;
    struct timeval tv1, tv2;
    struct timezone tz;
	double elapsed; 

    int num_threads;
    printf("Enter the number of threads: ");
    scanf("%d", &num_threads);

    // Check if the number of threads is greater than the number of processors available.
    // If it is, set the number of threads to the number of processors available.
    int num_processors = omp_get_max_threads();
    if (num_threads > num_processors) {
        num_threads = num_processors;
    }

    // Unset the OMP_NUM_THREADS environment variable, if it is set.
    unsetenv("OMP_NUM_THREADS");

    // Set the number of threads using the omp_set_num_threads() function.
    omp_set_num_threads(num_threads);

    // **Comment out the following lines:**
    // // Print the number of threads that OpenMP is using.
    // // printf("Number of threads: %d\n", omp_get_num_threads());

    // Initialize the matrices A and B.
    for (i= 0; i< N; i++)
        for (j= 0; j< N; j++)
	{
         A[i][j] = rand() % 100;
         B[i][j] = rand() % 100;
	}

    // Start the timer.
    gettimeofday(&tv1, &tz);

    // Perform the matrix multiplication in parallel using OpenMP.
    #pragma omp parallel for private(i,j,k) shared(A,B,C)
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            for (k = 0; k < N; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Stop the timer.
    gettimeofday(&tv2, &tz);

    // Calculate the elapsed time.
    elapsed = (double) (tv2.tv_sec-tv1.tv_sec) + (double) (tv2.tv_usec-tv1.tv_usec) * 1.e-6;

    // Print the elapsed time.
    printf("Elapsed time = %f seconds.\n", elapsed);

    return 0;
}
