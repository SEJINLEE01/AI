#include <stdio.h>

int main(){
    double A,Vel,R; // (모터) 평균전류[A],평균속도[km/h], 예비율[0~1]
    double V,C,eta; // (배터리) 공칭전압[V],용량[Ah],시스템효율[0~1]
    
    printf("모터의 평균전류를 입력하세요(A) : ");
    scanf("%lf",&A);
    printf("모터의 평균속도를 입력하세요(km/h) : ");
    scanf("%lf",&Vel);
    printf("예비율을 입력하세요(0~1) : ");
    scanf("%lf",&R);
    printf("배터리 전압을 입력하세요(V) : ");
    scanf("%lf",&V);
    printf("배터리 용량을 입력하세요(Ah) : ");
    scanf("%lf",&C);
    printf("시스템 효율을 입력하세요(0~1) : ");
    scanf("%lf",&eta);
    
    double E_usable = V*C*eta*(1-R); // 사용가능에너지(Wh)
    double P = (V*A)/eta; // 소비전력 (W)
    double t = E_usable / P; // 런타임 (h)
    double d = Vel * t; // 주행거리(km)

    printf("사용가능 에너지는 %.2lfWh 입니다.\n",E_usable);
    printf("사용가능 시간은 %.2lfh 입니다.\n",t);
    printf("주행거리는 %.2lfkm 입니다.\n",d);
}