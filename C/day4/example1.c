#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

double clip(double x,double min,double max);

int main(){
    double m, T_m, N_m; // 총질량(kg), 모터 정격토크(N-m), 구동 모터수(개)
    double G, n, r; // 감속비, 구동효울(0~1), 바퀴반지름(m)
    double c; // 구름저항계수
    const double g = 9.8;
    double SF; // 안전계수(>=1)

    printf("총질량을 입력하세요(kg) : ");
    scanf("%lf",&m);
    printf("모터 정격토크를 입력하세요(N-m) : ");
    scanf("%lf",&T_m);
    printf("구동 모터개수를 입력하세요(개) : ");
    scanf("%lf",&N_m);
    printf("감속비를 입력하세요 : ");
    scanf("%lf",&G);
    printf("구동 효율을 입력하세요(0~1) : ");
    scanf("%lf",&n);
    printf("바퀴 반지름을 입력하세요(m) : ");
    scanf("%lf",&r);
    printf("구름저항계수를 입력하세요(0.015~0.03) : ");
    scanf("%lf",&c);
    printf("안전 계수를 입력하세요(>=1) : ");
    scanf("%lf",&SF);

    const double T_tot = N_m*T_m*G*n;
    const double F_avail = T_tot/r;
    double s = clip((F_avail/SF-c*m*g)/(m*g),0,1);
    const double theta_max = asin(s);
    const double grade = tan(theta_max)*100;

    const double deg = s * (180 / PI);
    printf("총 가용 견인력은 %.4lf입니다\n",F_avail);
    printf("등판 가능 최대각은 %.4lfrad이고, %.4lfdeg 입니다\n",theta_max,deg);
    printf("등판율은 %.4lf%% 입니다\n",grade);
}

double clip(double x, double min,double max){
    if(x<min) return min;
    if(x>max) return max;
    return x;
}