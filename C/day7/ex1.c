#include <stdio.h>

void print_arr(int*, int);

int main() {
    int arr[5] = { 10,20,30,40,50 };
    int arr2[7] = { 10,20,30,40,50,60,70 };

    print_arr(arr, sizeof(arr) / sizeof(int));
    print_arr(arr2, sizeof(arr2) / sizeof(int));


}

void print_arr(int* pa, int size) {
    for (int i = 0; i < size;i++) {
        printf("%d ", pa[i]);
        //printf("%d "*(pa+i));
    }

    printf("\n");
}