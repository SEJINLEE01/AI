#include <stdio.h>

int main(){
    int num,grade;

    printf("학번 입력 : ");
    scanf("%d",&num);

    // getchar(); // 버퍼에있는걸(\n) 날림
    printf("학점 입력 : ");
    scanf(" %c",&grade); // 위에서 입력한게 버퍼에 남아있어서 학점이 입력이 안됨
    // grade = getchar();

    printf("학번 : %d, 학점 : %c\n",num,grade);
}