#include <stdio.h>

typedef struct vision {
    double left;
    double right;
}v;

v exchange(v robot);

int main() {
    v robot;
    printf("시력 입력 : ");
    scanf("%lf%lf", &(robot.left), &(robot.right));
    robot = exchange(robot);
    printf("바뀐 시력 : %.1lf, %.1lf\n", robot.left, robot.right);
}

v exchange(v robot) {
    double temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;

    return robot;
}