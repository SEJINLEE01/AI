#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct profile {
    char name[20];
    int age;
    double height;
    char* intro;
}pro;

int main() {
    pro yuni;
    int size = 80;
    
    strcpy(yuni.name, "서하윤");
    yuni.age = 17;
    yuni.height = 164.5;

    yuni.intro = (char*)malloc(size);
    printf("자기소개 : ");
    fgets(yuni.intro, size, stdin);
    
    printf("이름 : %s\n", yuni.name);
    printf("나이 : %d\n", yuni.age);
    printf("키 : %.1lf\n", yuni.height);
    printf("자기소개 : %s\n", yuni.intro);
    free(yuni.intro);
}