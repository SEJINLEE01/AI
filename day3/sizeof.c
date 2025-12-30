#include <stdio.h>

int main(){
    int a=10;
    double b=3.14;

    printf("a의 크기 : %d\n",sizeof(a));
    printf("b의 크기 : %d\n",sizeof(b));
    printf("정수의 크기 : %d\n",sizeof(int));
    printf("double의 크기 : %d\n",sizeof(double));
    printf("float의 크기 : %d\n",sizeof(float));
    printf("char의 크기 : %d\n",sizeof(char));
}