#include <stdio.h>

int main(){
    int a,b;
    int sum,sub,mul,inv;

    a=10;
    b=20;
    sum = a+b;
    sub = a-b;
    mul = a*b;
    inv = -a;

    printf("a의 값 : %d, b의 값 : %d\n",a,b);
    printf("sum : %d, sub : %d, mul : %d, inv : %d\n",sum,sub,mul,inv);

    return 0;
}