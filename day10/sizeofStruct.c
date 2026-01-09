#include <stdio.h>

typedef struct student {
    char ch1;
    short num;
    char ch2;
    int score;
    double grade;
    char ch3;
}st;

typedef struct student2 {
    char ch1;
    short num;
    char ch2;
    int score;
    double grade;
    char ch3;
    int num2;
}st2;

typedef struct student3 {
    char ch1;
    short num;
    char ch2;
    char ch3;
    int score;
    int num2;
    double grade;
}st3;

int main() {
    st s1;
    st2 s2;
    st3 s3;

    printf("%ld\n", sizeof(s1));
    printf("%ld\n", sizeof(st2));
    printf("%ld\n", sizeof(st3));
   
}