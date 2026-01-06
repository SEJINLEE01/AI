#include <stdio.h>

int main(){
    char str[80];
    printf("공백이 포함된 문자열 입력 : ");
    gets(str);
    printf("입력한 문자열은 %s입니다.\n",str);
    printf("%d\n",str[0]);
    // gets는 개행문자를 \0으로 바꿔서 해줌
}