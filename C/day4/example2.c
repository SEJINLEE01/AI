#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
    double r, W, El, Er; // 바퀴반지름(m), 트랙폭(m), 좌우바퀴 오차율(%)
    double L; // 목표주행거리(m)
    
    printf("바퀴의 반지름을 입력하세요(m) : ");
    scanf("%lf",&r);
    printf("트랙폭(m) : ");
    scanf("%lf",&W);
    printf("좌측 바퀴 오차율을 입력하세요(%%) : ");
    scanf("%lf",&El);
    printf("우측 바퀴 오차율을 입력하세요(%%) : ");
    scanf("%lf",&Er);
    printf("목표주행거리를 입력하세요(m) : ");
    scanf("%lf",&L);

    const double Rl = r*(1+El); // 왼쪽 바퀴반경
    const double Rr = r*(1+Er); // 오른 바퀴반경
    const double Rc = (W/2) * (Rl+Rr)/(Rr-Rl); // 곡률반경
    const double delta = L/Rc; // 편류각
    const double D_drift = Rc*(1-cos(delta)); // 편류거리

    printf("좌/우 바퀴 반경 : %.4lf m / %.4lf m\n",Rl,Rr);
    printf("곡률반경 Rc : %.4lfm\n",Rc);
    printf("편류각 : %.4lfdeg\n",delta*180/PI);
    printf("편류거리 d_drift : %.4lfm\n",D_drift);
}
