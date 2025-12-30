#include <stdio.h>

int main(){
    int a=10,b=20,res;

    res = (a>b) ? a:b;
    printf("%d\n",res);

    res = (a>b) ? a+b:a-b;
    printf("%d\n",res);
}