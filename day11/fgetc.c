#include <stdio.h>

int main() {
    char ch;

    while (1) {
        if ((ch = fgetc(stdin)) == EOF)
            break;

        fputc(ch, stdout);
    }
    
}