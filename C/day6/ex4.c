#include <stdio.h>
#include <stdlib.h>

int main() {
    char* pc;
    int in;
    char ch;

    int value[5];

    printf("%ld\n", sizeof(value));
    printf("%ld\n", sizeof(&ch));
    printf("%ld\n", sizeof(in));
    printf("%ld\n", sizeof(pc));
}