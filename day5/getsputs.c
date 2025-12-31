#include <stdio.h>

int main(){
    char str[80];

    printf("문자열 입력 : ");
    // gets(str); // 띄워쓰기 저장
    scanf("%s",str); // 띄워쓰기 저장 x
    // gets는 배열의 칸수 같은거 확인안하고 다집어넣는다(오버플로어 발생), scanf는 딱 그 문자열 크기만큼만 넣어준다. 그래서 gets는 잘 안쓴다.
    puts("입력된 문자열 : ");
    puts(str);
}