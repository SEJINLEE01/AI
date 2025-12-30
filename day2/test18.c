#include <stdio.h>

int main(){
    int a =10,b=20,c=10;
    int res;

    res = (a>b);
    printf("a > b : %d\n",res);
    res = (a<b);
    printf("a < b : %d\n",res);

    res = (a>5) && (a<20);
    printf("&& : %d\n",res);
    res = (a>5) || (a<20);
    printf("|| : %d\n",res);
    res = !(a>=10);
    printf("! : %d\n",res);
}