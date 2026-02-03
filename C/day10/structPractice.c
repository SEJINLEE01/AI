#include <stdio.h>

typedef struct WheelSpeed {
    double left; // 왼바퀴 속도 (rad/s)
    double right; // 오른바퀴 속도 (rad/s)
}ws;

typedef struct RobotSpeed {
    double linear; // 선속도 (m/s)
    double angular; // 각속도 (rad/s)
}rs;

rs computeSpeed(ws, double, double);

int main() {
    rs r;
    ws w;
    double w_rad, w_dis;

    printf("왼쪽 바퀴속도(rad/s) : ");
    scanf("%lf", &w.left);
    printf("오른 바퀴속도(rad/s) : ");
    scanf("%lf", &w.right);
    printf("바퀴 반지름(m) : ");
    scanf("%lf", &w_rad);
    printf("바퀴 간 거리(m) : ");
    scanf("%lf", &w_dis);

    r = computeSpeed(w, w_rad, w_dis);
    printf("\n선속도: %.2lf m/s\n", r.linear);
    printf("각속도: %.2lf m/s\n", r.angular);
}

rs computeSpeed(ws w, double wheel_rad, double wheel_distance) {
    rs r;
    r.linear = (wheel_rad * (w.right + w.left)) / 2;
    r.angular = (wheel_rad * (w.right - w.left)) / wheel_distance;
    return r;
}