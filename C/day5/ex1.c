#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    double* v_log;
    int N;
    
    printf("주행 속도 로그의 개수를 입력하세요 : ");
    scanf("%d",&N);

    v_log = (double *)malloc(sizeof(double)*N);
    
    /*
    for(int i=0;i<N;i++){
        printf("속도(km/h) : ");
        scanf("%lf",&v_log[i]);
    }
    // 직접입력 */  

    
    for(int i=0;i<N;i++){
        v_log[i]=rand()%200;
        printf("속도(km/h) : %.2lf\n",v_log[i]);
    }
    // 랜덤 입력  

    int gasok=0, jedong=0;
    for(int i=1;i<N;i++){
        double diff = v_log[i]-v_log[i-1];
        if(diff>=10){
            printf("급가속\n");
            gasok++;
        }
        else if(diff<=-10){
            printf("급제동\n");
            jedong++;
        }
    }
    
    printf("총 급가속 : %d번, 총 급제동 : %d번\n",gasok,jedong);
}