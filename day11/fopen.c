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
    strcat(filename, "a.txt");

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("파일이 열리지않음.\n");
        return 1;
    }

    printf("파일이 열렸습니다.\n");

    while (1) {
        char ch = fgetc(fp);
        if (ch == EOF) break;
        putchar(ch);
    }

    fclose(fp);
}