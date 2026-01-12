#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FOLD "workspace/"
int main() {
    FILE* fp;
    char* filename;
    int length = 20;
    filename = (char*)malloc(sizeof(char) * length);
    strcat(filename, FOLD);
    strcat(filename, "b.txt");

    char str[] = "apple";
    if ((fp = fopen(filename, "a")) == NULL) {
        printf("파일을 만들지 못했습니다\n");
        return 1;
    }

    printf("파일을 열었습니다\n");
    int i = 0;
    while (str[i] != '\0') {
        fputc(str[i], fp);
        i++;
    }
    fputc('\n', fp);
    printf("파일을 닫았습니다\n");
    fclose(fp);
}