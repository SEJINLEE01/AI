#include <stdio.h>

int main() {
    int age;
    char name[20];

    printf("나이 입력 : ");
    scanf("%d", &age);
    getchar(); 
    // 사이에 개행문자를 없애는 명령어가 없으면 gets는 버퍼에 남아있는 \n를 \0로 바꿔서
    // 제대로 받지 못하게된다.
    printf("이름 입력 : ");
    gets(name);
    printf("나이 : %d, 이름 : %s\n", age, name);
    printf("%d %d %d %d", name[3], name[4], name[5], name[6]);
}