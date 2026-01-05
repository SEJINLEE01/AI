#include <stdio.h>

int main(){
    int arr[3];
    int size = sizeof(arr)/sizeof(int);

    *(arr+0) = 10;
    *(arr+1)=*(arr+0)+10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d",(arr+2));

    for(int i=0;i<size;i++){
        printf("%p : %5d\n",(arr+i),*(arr+i));
    }

}