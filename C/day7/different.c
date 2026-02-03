#include <stdio.h>

int main() {
    char* pc;
    char str[80] = "mango";
    char str2[80] = "mango";

    pc = "mango";
    printf("%s\n", pc);
    printf("%p\n%p\n%p\n", pc, str, str2);
}