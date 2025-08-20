#include<stdio.h>
#include<time.h>
int main(){
    clock_t start=clock();
    //simple loop for doing some work
    for(long i=0;i<100000000;i++);
    clock_t end=clock();
    double time_taken=(double)(end-start)/CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n",time_taken);
    return 0;
}