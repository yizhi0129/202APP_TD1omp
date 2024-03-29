#include <stdio.h>
#include </usr/local/Cellar/libomp/17.0.6/include/omp.h>

int main(int argc, char **argv)
{
    int sh_var;

    printf("Section séquentielle\n");
#pragma omp parallel 
    {
        int pr_var;
        int trank = omp_get_thread_num();
        printf("Dans la région parallèle, thread %d addr(sh_var)=%p addr(pr_var)=%p\n", trank, &sh_var, &pr_var);
    }
    printf("Autre section séquentielle\n");

    return 0;
}
