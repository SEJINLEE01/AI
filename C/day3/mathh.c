#include <stdio.h>
#include <math.h>

int main(){
    double x,y;

    printf("실수 입력 (x, y) : ");
    scanf("%lf %lf",&x,&y);
    
    printf("sqrt(x) = %.4lf\n",sqrt(x));
    printf("pow(x,y) = %.4lf\n",pow(x,y));
    printf("sin(x) = %.4lf\n",sin(x));
    printf("cos(x) = %.4lf\n",cos(x));
    printf("log(x) = %.4lf\n",log(x));
    printf("fabs(x) = %.4lf\n",fabs(x));
}