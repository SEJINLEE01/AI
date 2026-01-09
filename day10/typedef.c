#include <stdio.h>

typedef struct student {
    int num;
    double grade;
}student;

void print_data(student* ps) {
    printf("학번 : %d\n", ps->num);
    printf("학점 : %.1lf\n", ps->grade);
}

int main() {
    student s1 = { 315,4.4 };
    print_data(&s1);
}