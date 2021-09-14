#include <stdio.h>
#include <omp.h>
int main() {
	omp_set_num_threads(5);
	#pragma omp parallel
	{
		int id = omp_get_thread_num();
		int threads = omp_get_num_threads();
		printf("Hello from thread %d, nthreads %d\n", id, threads);
	}
	return 0;
}