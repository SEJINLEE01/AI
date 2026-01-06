#include <stdio.h>

int main() {
    char str[80];
    char str2[80];

    // 1.
    // scanf("%s", str); //enter로 받는 한문장은 잘 구별함
    // scanf("%s", str2); //하지만 띄워쓰기가 들어가면 원하는 결과를 못받음

    // printf("%s\n", str);
    // printf("%s\n", str2);
    // printf("%d\n", str[3]); //개행문자 포함 X / 하지만 버퍼에 개행문자는 남아있다.
    // printf("%d\n", str2[2]); //문자 끝에 \0은 잘들어가는모습

    // 2.
    // gets(str); //띄워쓰기 문자열 넣어도 잘됨
    // gets(str2); 

    // printf("%s\n", str);
    // printf("%s\n", str2);
    // printf("%d\n", str[6]); //개행문자 포함 X
    // printf("%d\n", str2[3]); // 개행문자를 \0로 바꿔주기 때문에 \0은 잘들어감

    // 3.
    // fgets(str, sizeof(str), stdin);
    // fgets(str2, sizeof(str2), stdin);

    // printf("%s\n", str);
    // printf("%s\n", str2);
    // printf("%d\n", str[7]); //fgets는 개행문자를 포함하는 모습
    // printf("%d\n", str2[4]); //개행문자를 포함해서 뒤에 \0을 넣는다.

    // 4.
    // gets(str);
    // scanf("%s", str); 
    // puts(str); //개행문자를 포함해서 출력
 
    // 5.
    // gets(str);
    // fputs(str,stdout); //개행문자 포함안하고 출력


}