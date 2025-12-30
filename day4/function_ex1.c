#include <stdio.h>

int avg(int,int);

int main(){
    int a,b;
    int result;
    printf("a와 b를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    result = avg(a,b);
    printf("a와 b의 평균은 : %d입니다\n",result);
}

int avg(int x, int y){
    int temp = x+y;
    return temp/2;
}