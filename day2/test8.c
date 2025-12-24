#include <stdio.h>
#include <limits.h>

int main(){
    int in = INT_MAX;
    short sh = SHRT_MAX;
    long ln = LONG_MAX;
    long long lln = LLONG_MAX;

    printf("%d\n",in);
    printf("%d\n",sh);
    printf("%ld\n",ln);
    printf("%lld\n",lln);
    
    return 0;
}