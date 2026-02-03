#include <stdio.h>

int main(){
    int res;
    char ch;

    while(1){
        if((res = scanf("%c",&ch))==-1) break;
        printf("%d ",ch);
    }
}