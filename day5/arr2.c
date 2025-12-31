#include<stdio.h>

int main(){
    char str[80] = "applejam";
    char str1[8] = {'a','p','p','l','e'};
    printf("%d\n",str1[7]);
    printf("%d\n",str[79]);
    scanf("%s",str);
    str[5] = 'W';
    printf("%s\n",str);
    printf("%c\n",str[6]);
    printf("%d\n%d\n",str[5],str[8]);
    
}