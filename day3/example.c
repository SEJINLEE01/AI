#include <stdio.h>

int main(void){
    double mass, torque, gear, radius, SF, DM;
    int wheels;

    const double g = 9.81; //중력가속도 [9.81 N/㎡]
    const double c = 0.018; //구름저항계수 – 일반적인 고무바퀴 & 아스팔트

//이동로봇 설계 사양 입력
    printf("구동 바퀴 수 : ");
    scanf("%d", &wheels);    
    printf("총 하중(kg) : ");
    scanf("%lf", &mass);
    printf("안전계수 : ");
    scanf("%lf", &SF);
    printf("설계마진(20%% == 1.2로 입력) : ");
    scanf("%lf", &DM);

    //모터 및 바퀴 사양 입력
    printf("모터 정격 토크(N-m) : ");
    scanf("%lf", &torque);
    printf("감속비 : ");
    scanf("%lf", &gear);
    printf("바퀴 반지름(m) : ");
    scanf("%lf", &radius);

//입력 받은 값으로 견인력 계산 
    double W = mass * g;
    double F_min = c * W * SF * DM;
    double F_motor = (torque * gear / radius) * wheels;

    printf("\n필요한 최소 견인력 : %.2f N\n", F_min);
    printf("모터가 낼 수 있는 견인력 : %.2f N\n", F_motor);

    if (F_motor >= F_min){
        printf("판정 : 만족 (모터 견인력이 충분합니다.)\n");
    } else {
        printf("판정 : 불만족 (더 큰 모터나 감속비가 필요.)\n");
    }
    return 0;

}