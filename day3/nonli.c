#include <stdio.h>

int main(){
    int a = 10; //00001010
    int b = 12; //00001100

    printf("a & b = %d\n",a & b); // 논리곱
    printf("a ^ b = %d\n",a ^ b); // xor
    printf("a | b = %d\n",a | b); // 논리합
    printf("~a = %d\n",~a); //not
    printf("a >> 1 = %d\n",a >> 1); // 시프트비트연산 /2
    printf("a << 1 = %d\n",a << 1); // 시프트비트연산 *2
    printf("~a << 1 = %d\n",~a << 1); // 음수 시프트 *2
    printf("~a >> 1 = %d\n",~a >> 1); // 음수 시프트 /2
}