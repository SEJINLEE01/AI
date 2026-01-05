#include <stdio.h>

void swap(int*, int*);

int main() {
    int a = 10, b = 20;
    swap(&a, &b);
    printf("a의 주소 : %p\n", &a);
    printf("a : %d, b : %d\n", a, b);
}

void swap(int* pa, int* pb) {
    int temp = *pa;
    *pa = *pb;
    printf("*pa의 주소 : %p\n", &(*pa));
    *pb = temp;
}