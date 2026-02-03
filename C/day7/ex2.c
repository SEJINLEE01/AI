#include <stdio.h>

void input_arr(double* pa, int size);
void find_max(double* pa, int size);

int main() {
    double arr[5];
    
    int size = sizeof(arr) / sizeof(arr[0]);

    input_arr(arr,size);
    find_max(arr,size);

}

void input_arr(double* pa, int size) {
    printf("실수 값 %d개 입력 : ", size);
    for (int i = 0;i < size;i++) {
        scanf("%lf", pa + i);
    }
}

void find_max(double* pa, int size) {
    double max = pa[0];

    for (int i = 1;i < size;i++) {
        if (max < pa[i])
            max = pa[i];
    }

    printf("배열의 최대값 : %.2lf\n",max);
}