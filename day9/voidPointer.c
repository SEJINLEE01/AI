#include <stdio.h>

int main() {
    int a = __INT_MAX__;
    double b = 1e300;
    void* vp;

    vp = &a;

    printf("%d\n", *(int*)vp);
    vp = &b;
    printf("%d\n", *(int*)vp);

}