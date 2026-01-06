#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    printf("공백이 포함된 문자열 입력 : ");
    fgets(str, sizeof(str), stdin);
    printf("입력된 문자열은 %s입니다\n", str);
    // fgets는 개행문자까지 포함시켜서 저장하므로
    // str[strlen(str) - 1] = '\0'; //마지막 1칸(개행문자)를 널로 바꿔서 없애버림
    // 단 저장공간이 부족하면 -1칸에 '\0'을 자동으로 넣어준다.
    printf("입력된 문자열은 %s입니다\n", str);
}