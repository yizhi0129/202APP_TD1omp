#include <stdio.h>
#include </usr/local/Cellar/libomp/17.0.6/include/omp.h>

int main(int argc, char **argv)
{
    printf("Section séquentielle\n");
#pragma omp parallel
    {
        int trank = omp_get_thread_num();
        printf("Dans la région parallèle, thread %d\n", trank);
    }
    printf("Autre section séquentielle\n");

    return 0;
}
