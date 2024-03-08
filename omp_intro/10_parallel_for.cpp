#include <stdio.h>
#include </usr/local/Cellar/libomp/17.0.6/include/omp.h>

int main(int argc, char **argv)
{
    int N = 1000000;
    double *arr = new double[N];

    double tbeg = omp_get_wtime();
#pragma omp parallel for shared(N)
    for(int i = 0 ; i < N ; i++)
    {
        arr[i] = i/2.;
    }
    double tend = omp_get_wtime();
    printf("Telaps = %g s\n", tend - tbeg);

    delete[] arr;

    return 0;
}
