#include <stdio.h>

int main() {
    char ani[20];
    char why[80];
    printf("좋아하는 동물 : ");
    scanf("%s", ani);
    // getchar();
    printf("좋아하는 이유 : ");
    fgets(why, sizeof(why), stdin);
    // 개행문자를 받아버리기 때문에 개행문자를 없애는 getchar()를 사용
    printf("%s is %s", ani, why);
    printf("%d\n",why[0]);
}