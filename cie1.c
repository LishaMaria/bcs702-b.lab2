#include<stdio.h>
#include<omp.h>
int main(){
    double start=omp_get_wtime();
    //simple loop for doing some work in parallel
    #pragma omp parallel for
    for(long i=0;i<100000000;i++){
        //Do some trivial work(empty loop)
    }
    double end=omp_get_wtime();
    double time_taken=end-start;
    printf("Execution time: %f seconds\n",time_taken);
    return 0;
}

