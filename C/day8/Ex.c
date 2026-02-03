#include <stdio.h>

int main() {
    int arr[5][6] = { 0, };

    for (int i = 0;i < 4;i++) {
        for (int j = 0;j < 5;j++) {
            arr[i][j] = i * 5 + j + 1;
        }
    }

    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 4;j++) {
            arr[4][i] += arr[j][i]; //열 계산

        }

        for (int k = 0;k < 5;k++) {
            arr[i][5] += arr[i][k]; //행 계산
        }

    }

    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 6;j++) {
            printf("%5d ", arr[i][j]);
        }
        printf("\n");
    }
}