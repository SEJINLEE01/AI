#include <stdio.h>
#include <stdlib.h>

#define MAX_N 16

void Is_Line(char*,int*,int,int);
int Counting(char*,int);
float Middle(char*,int);

int main(){
    int N;
    int* value;
    int threshold;
    char* label;

    printf("적외선 센서의 개수를 입력(1~%d) : ",MAX_N);
    scanf("%d",&N);
    value = (int*)malloc(sizeof(int)*N);
    label = (char*)malloc(sizeof(char)*N);
    
    printf("Value : ");
    for(int i =0;i<N;i++){
        
        scanf("%d",&value[i]);
    }

    printf("임계값을 입력 : ");
    scanf("%d",&threshold);
    Is_Line(label,value,threshold,N);

    int black_count=Counting(label,N);
    float index_avg=Middle(label,N);

    for(int i =0;i<N;i++){
        //printf("%d ",label[i]-'0');
        printf("%c ",label[i]);
    }
    printf("\n");
    printf("black_count : %d\nindex_avg : %.1f\n",black_count,index_avg);
}

void Is_Line(char* L,int* V,int Thr,int N){
    for(int i=0;i<N;i++){
        if(V[i]<Thr)
            L[i]='1';
        else
            L[i]='0';
    }
}
int Counting(char* L,int N){
    int count=0;
    for(int i = 0;i<N;i++)
        if(L[i]=='1') count++;
    
    return count;
}
float Middle(char*L,int N){
    int index = 0;

    for(int i = 0;i<N;i++)
        if(L[i]=='1') index += i+1;

    return index/(float)N;
}