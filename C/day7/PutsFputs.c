#include <stdio.h>

int main() {
    char str[80] = "apple juice";
    char* ps = "banana";

    puts(str); //puts는 개행문자를 자동으로 넣어준다
    fputs(ps, stdout); //fputs는 아니다.
    puts("milk");
}