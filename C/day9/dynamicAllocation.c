#include <stdio.h>
#include <stdlib.h>

int main() {
    int* pi;
    double* pd;

    pi = (int*)malloc(sizeof(int));
    pd = (double*)malloc(sizeof(double));

    *pi = 10;
    *pd = 3.4;

    printf("%d, %.1lf\n", *pi, *pd);

    free(pi);
    free(pd);

}