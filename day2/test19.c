#include <stdio.h>

int main(){
    int a =20, b=3;
    double res;

    res = ((double)a) / ((double)b);
    printf("res : %.10lf\n",res);

    a=(int)res;
    printf("(int)%.1lf의 결과 : %d\n",res,a);

    return 0;
}