#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char temp[80];
    char* str[3];

    for (int i = 0;i < 3;i++) {
        printf("문자열을 입력하세요 : ");
        gets(temp);
        str[i] = (char*)malloc(strlen(temp) + 1);
        strcpy(str[i], temp);
    }

    for (int i = 0;i < 3;i++) {
        printf("%s\n", str[i]);
        free(str[i]);
    }
}