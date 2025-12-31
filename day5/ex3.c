#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int v=0,before_v=0;
    int boundary = 20,count=100;
    int delta, direction=1, b_dir=0;
    
    do{
        if(count<=10){
            v = before_v + direction*(rand()%boundary+1);
            delta = v-before_v;
            count++;
        }
        else if(count>10 && direction == b_dir){
            v = before_v + (rand()%(boundary*2+1)-boundary);
            delta = v-before_v;
            count = 0;
        }
        else v = before_v + (rand()%boundary+1);
        
        if(delta>=0) direction = 1;
        else direction = -1;

        if(v<=0) v=0;

        printf("속도 : %d\n",v);

        b_dir = direction;
        before_v = v;
    }while(v!=0);
}