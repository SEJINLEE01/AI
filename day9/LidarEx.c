#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define DEGREE 360

int main() {
    srand(time(NULL));
    double** Lidar_Num;
    Lidar_Num = (double**)malloc(sizeof(double*)); // 처음엔 1개

    Lidar_Num[0] = (double*)malloc(sizeof(double) * DEGREE);

    double min = __INT_MAX__;
    int index, num;
    int count = 0;
    char c = 'a';
    while (c != 'q') {
        for (int i = 0;i < DEGREE;i++) {
            Lidar_Num[count][i] = (rand() % 5001) / 100.0;

            if (min > Lidar_Num[count][i]) {
                min = Lidar_Num[count][i];
                index = i;
                num = count;
            }
        }

        printf("계속받으시겠습니까?(그만두려면 q): ");
        scanf(" %c", &c);

        if (c != 'q') {
            count++;
            Lidar_Num = (double**)realloc(Lidar_Num, sizeof(double*) * count + 1);
            for (int i = 0;i <= count;i++) {
                Lidar_Num[i] = (double*)realloc(Lidar_Num[i], sizeof(double) * DEGREE);
            }
        }
    }

    printf("%d번째, 최소거리 : %.2lfcm\n최소거리방향 : %d도\n", num, min, index);

    for (int i = 0;i <= count;i++)
        free(Lidar_Num[i]);
    free(Lidar_Num);
}