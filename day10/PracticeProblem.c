#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student {
    int num;
    char name[20];
    int kor, eng, mat;
    double avg;
    char grade;
}st;

void compute_avg(st*, int);
void compute_grade(st*, int);
void student_print(st* stu, int);
void sort(st* stu, int);

int main() {
    st* Student;
    int size = 5;
    Student = (st*)malloc(size * sizeof(st));

    for (int i = 0;i < size;i++) {
        printf("학번 : ");
        scanf("%d", &Student[i].num);
        printf("이름 : ");
        scanf("%s", Student[i].name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d %d %d", &Student[i].kor, &Student[i].eng, &Student[i].mat);
    }
    compute_avg(Student, size);
    compute_grade(Student, size);

    printf("# 정렬 전 데이터 ... \n");
    student_print(Student, size);
    printf("# 정렬 후 데이터 ... \n");
    sort(Student, size);
    student_print(Student, size);

    free(Student);
}

void compute_avg(st* stu, int size) {
    for (int i = 0;i < size;i++)
        stu[i].avg = (stu[i].kor + stu[i].eng + stu[i].mat) / 3.0;
}

void compute_grade(st* stu, int size) {
    for (int i = 0;i < size;i++) {
        if (stu[i].avg >= 90)
            stu[i].grade = 'A';
        else if (stu[i].avg >= 80)
            stu[i].grade = 'B';
        else if (stu[i].avg >= 70)
            stu[i].grade = 'C';
        else
            stu[i].grade = 'F';
    }
}

void student_print(st* stu, int size) {
    for (int i = 0;i < size;i++) {
        printf("%5d %5s %3d%3d%3d%5.1lf%4c\n", stu[i].num, stu[i].name, stu[i].kor,
            stu[i].eng, stu[i].mat, stu[i].avg, stu[i].grade);
    }
}
void sort(st* stu, int size) {
    for (int i = 0;i < size - 1;i++) {
        for (int j = i + 1;j < size;j++) {
            if (stu[i].avg < stu[j].avg) {
                st temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
        }
    }
}