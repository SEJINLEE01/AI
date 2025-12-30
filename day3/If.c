#include <stdio.h>

int main(){
    int a =20;
    int b =0;
    if(a>10){
        b=a;
    }
    // b=(a>10) ? a : b;
    
    /* 파이썬은 블럭으로 나누는데 c는?
    if(a>10)
    a = 30;

    들여쓰기 안하면 어떻게 될까
    -> 정상 실행 된다. */
    printf("a : %d, b : %d\n",a,b);
}