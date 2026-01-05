#include <stdio.h>

int main() {
    int a = 10;
    int* pa;
    double* pd;
    int* pc;
    float* pf;

    pa = &a;
    // pd = pa;
    // pf = pa;
    // pc = pa;
    pd = (double*)pa;
    pf = (float*)pa;
    pc = pa;
    
    printf("pd : %lf\n", *pd);
    printf("(int*)pd : %d\n", *(int*)pd);
    printf("pa : %d\n", *pa);
    printf("pc : %d\n", *pc);
    printf("pf : %f\n", *pf);
    printf("%p\n", pd);
}