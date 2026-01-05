#include <stdio.h>

int main(){
    int a;
    double b;
    char c;

    int* pa;
    pa = &a;

    printf("double형 변수의 주소 : %p\n",&b);
    printf("char형 변수의 주소 : %p\n",&c);

    printf("\nAdress of pa : %p\n",&pa);
    printf("Value of pa : %p\n",pa);
    printf("Adress of a : %p\n",&a);
    printf("Adress of *pa : %p\n",&(*pa));
}