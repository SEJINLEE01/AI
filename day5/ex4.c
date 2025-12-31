#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    double* battery;
    int warning = 0;
    int ON = 30, OFF = 35;
    printf("몇개의 상황? : ");
    scanf("%d",&N);
    battery = (double*)malloc(sizeof(double)*N);

    for(int i=0;i<N;i++){
        printf("%d번째, 배터리의 잔량은? : ",i+1);
        scanf("%lf",&battery[i]);
    }
    printf("\n");
    for(int i =0;i<N;i++){
        if(warning==0 && battery[i]<=ON) warning = 1;
        else if(warning==1 && battery[i]>=OFF) warning = 0;

        printf("%2d번째 배터리의 잔량 %.2lf%% / 경고 %s\n",i+1,battery[i],warning==1?"ON":"OFF");
    }
    
}