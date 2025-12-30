#include <stdio.h>

int main(){
    int a =10,b=10;
    ++a;
    --b;

    printf("a : %d\n",a);
    printf("b : %d\n",b);

    int pre, post;

    a=5; b=5;
    pre = (++a) * 3;
    post = (b++)*3;
    
    printf("전위연산 : %d, 후위연산 : %d\n",pre,post);
}