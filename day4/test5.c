#include <stdio.h>

int main(){
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = arr[0]+arr[1];
    scanf("%d",&arr[3]);
    
    for(int i =0;i<sizeof(arr)/sizeof(int);i++)
        printf("%d ",arr[i]);
    printf("\n");
}