#include <stdio.h>

int main(){
    
    for(int i = 1 ;i<10 ; i++){
        printf("--------%d단--------\n",i);
        for(int j=1;j<10 ; j++){
            printf("%2d * %2d = %2d ",i,j,i*j);
            if(j%3==0)
                printf("\n");
        }
        getchar(); 
    }

}