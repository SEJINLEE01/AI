#include <stdio.h>

int main() {
    int arr[3][4] = { 0, };
    for (int i = 0;i < 3;i++) {
        for (int j = 0;j < 4;j++) {
            arr[i][j] = i * 4 + j;
        }
    }
    printf("%p\t%p\t%p\n", arr, arr[0], &arr[0][0]);
    printf("%p\t%p\t%p\n", arr + 1, arr[1], *(arr + 1));
    printf("%p\t%p\n", arr[0] + 1, &arr[0][1]);
    printf("%d\n", **(arr + 1));
}