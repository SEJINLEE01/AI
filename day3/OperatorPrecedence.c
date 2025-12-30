#include <stdio.h>

int main(){
    int a = 10, b = 5;
    int res;

    res = a / b * 2; //우선순위 같음 왼쪽부터
    printf("res = %d\n",res);
    res = ++a * 3; // ++가 우선순위
    printf("res = %d\n",res);
    res = a>b && a!=5; // 비교부터하고 &&
    printf("res = %d\n",res);
    res = a%3 == 0;
    printf("res = %d\n",res);
    
}