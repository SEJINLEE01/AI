#include <stdio.h>

int a;

void assign10() {
    a = 10;
}

void assign20() {
    int a; // local variable
    a = 20;
}

int main() {

    printf("1. %d\n", a);
    assign10();
    assign20();
    printf("2. %d\n", a);

}

