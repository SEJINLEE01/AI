#include <stdio.h>

int main(){
    int arr[3] = {10,20,30};
    int *pa = arr;
    int *pb = arr+3;

    printf("%p, %p\n",pb,pa);
    printf("%ld\n",pb-pa);

    printf("배열의 값 : \n");
    for(int i =0;i<3;i++){
        printf("%p ",pa);
        printf("%d \n",*pa++);
    }
    printf("%p, %d\n",pa,*pa);
}