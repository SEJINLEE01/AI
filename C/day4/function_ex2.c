#include <stdio.h>
#define PI 3.141592

double deg_to_rad(double);
double rad_to_deg(double);

int main(){
    int select;
    printf("deg to rad : 1\nrad to deg : 2\n");
    scanf("%d",&select);
    double r;
    if(select == 1){
        printf("select deg : ");
        scanf("%lf",&r);
        double result = deg_to_rad(r);
        printf("deg %.4lf is %.4lf rad\n",r,result);
    }
    else if(select == 2){
        printf("select rad : ");
        scanf("%lf",&r);
        double result = rad_to_deg(r);
        printf("rad %.4lf is %.4lf deg\n",r,result);
    }
    else{
        return 0;
    }
}

double deg_to_rad(double deg){
    return deg * PI / 180;
}

double rad_to_deg(double rad){
    return rad * 180 / PI;
}