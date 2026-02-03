#include <stdio.h>

void print_month(int*);

int main() {
    int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    print_month(month);
}

void print_month(int* mp) {
    int enter = 0;
    int space = 6;
            
    for (int i = 0;i < 12;i++) {
        printf("%15d월\n", i + 1);
        for (int k = 0;k < enter;k++)
            printf("%*s", space, "");

        for (int j = 1;j <= mp[i];j++) {
            printf("%5d ", j);
            enter++;
            if (enter % 5 == 0) {
                printf("\n");
                enter = 0;
            }
        }

        printf("\n");
    }
}