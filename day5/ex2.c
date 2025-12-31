#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    double* v_log;
    int N;
    int boundary = 41;

    printf("주행 속도 로그의 개수를 입력하세요 : ");
    scanf("%d",&N);

    v_log = (double *)malloc(sizeof(double)*N);

   
    int delta,before;
    int check, count=0;
    v_log[0]=rand()%100+1;
    printf("1. 속도 = %.2lf\n",v_log[0]);
    v_log[1]=v_log[0] + (rand()%boundary-10);
    printf("2. 속도 = %.2lf\n",v_log[1]);
    delta=v_log[1]-v_log[0];
    
    for(int i=2;i<N;i++){
        if(delta>=0){ 
            check=1;
            before=1;
        }
        else {
            check=-1;
            before=-1;
        }
        
        if(count<=10){
            v_log[i] = v_log[i-1] + check*(rand()%(boundary/2)+1);   
            count++;  
        }else{
            v_log[i] = v_log[i-1] + (rand()%boundary-10); 
            delta=v_log[i]-v_log[i-1];
            if(delta>=0){ 
                check=1;
                if(check!=before)
                    count=0;
            }
            else {
                check=-1;
                if(check!=before)
                    count=0;
            }
        }
        if(v_log[i]<0)
            v_log[i]=0;

        printf("%d 속도 = %.2lf\n",i+1,v_log[i]);
    }
}