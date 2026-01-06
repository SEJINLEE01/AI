#include <stdio.h>

int main() {
    char str[80];

    printf("문자열 입력 : ");
    scanf("%s", str);
    printf("첫 번째 단어 : %s\n", str);
    scanf("%s", str);
    printf("버퍼에 남아있는 두 번째 단어 : %s\n", str);
    //scanf는 스페이스바를 기준으로 \0을 넣어서 단어를 쪼개기 때문에
    //위에서 apple jam을 입력하면 버퍼에 jam이 남아있어서 입력하지않아도 그대로 출력됨

}