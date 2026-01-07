#include <stdio.h>

int mystrlen(char*);
char* mystrcpy(char*, char*);
char* mystrcat(char*, char*);
int mystrcmp(char*, char*);
char* mystrncpy(char*, char*, int);
char* mystrncat(char*, char*, int);
int mystrncmp(char*, char*, int);

int main() {
    char str1[80], str2[80];
    char* resp;

    printf("2개의 과일 이름 입력 : ");
    scanf("%s%s", str1, str2);

    if (mystrlen(str1) > mystrlen(str2))
        resp = str1;
    else
        resp = str2;

    printf("긴 문자열은 %s\n", resp);
    printf("둘이 비교값은? : %d\n", mystrcmp(str1, str2));
    mystrcpy(str1, str2);
    printf("복사된 문자열은 %s\n", str1);
    printf("둘이 비교값은? : %d\n", mystrcmp(str1, str2));
    mystrcat(str1, str2);
    printf("붙인 문자열은 %s\n", str1);
    printf("둘이 비교값은? : %d\n", mystrcmp(str1, str2));

    mystrncpy(str1, str2, 2);
    printf("복사된 문자열은 %s\n", str1);
    mystrncat(str1, str2, 3);
    printf("붙인 문자열은 %s\n", str1);
    printf("둘이 비교값은? : %d\n", mystrncmp(str1, str2, 2));

}

int mystrlen(char* str) {
    int count = 0;

    while (*str != '\0') {
        str++;
        count++;
    }

    return count;
}

char* mystrcpy(char* str1, char* str2) {
    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

    return str1;
}

char* mystrcat(char* str1, char* str2) {
    while (*str1 != '\0') str1++;

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

    return str1;
}

int mystrcmp(char* str1, char* str2) {
    while ((*str1 != '\0' || *str2 != '\0') && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    if (*str1 > *str2)
        return 1; //str1이 사전상 나중에 나옴
    else if (*str1 < *str2)
        return -1; //str2가 사전상 나중에 나옴
    return 0; // 둘이 동일함
}

char* mystrncpy(char* str1, char* str2, int n) {
    while (n--) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

    return str1;
}

char* mystrncat(char* str1, char* str2, int n) {
    while (*str1 != '\0') str1++;

    while (n--) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';

    return str1;
}

int mystrncmp(char* str1, char* str2, int n) {
    while (n-- && *str1 == *str2)
    {
        str1++;
        str2++;
    }

    if (*str1 > *str2)
        return 1; //str1이 사전상 나중에 나옴
    else if (*str1 < *str2)
        return -1; //str2가 사전상 나중에 나옴
    return 0; // 둘이 동일함
}