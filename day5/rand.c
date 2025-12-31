#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int r1 = rand()%10; // 0~9
    int r2 = rand()%100 + 1; // 1~100
    int r3 = rand()%21 - 10; //-10~10

    printf("r1 : %d, r2 : %d, r3 : %d\n",r1,r2,r3);

}