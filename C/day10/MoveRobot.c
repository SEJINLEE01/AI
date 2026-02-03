#include <stdio.h>

typedef struct position {
    int x;
    int y;
}Pos;

typedef struct Robot
{
    Pos p;
    char name[20];
}Rb;

void move(Rb*, int, int);

int main() {
    Rb Robot1 = { {0,0},"atom" };

    while (1) {
        int x, y;
        printf("이동할 좌표를 입력하세요, 현재 위치 %d, %d (그만두려면 숫자가 아닌값 입력) : ", Robot1.p.x, Robot1.p.y);
        scanf("%d", &x);
        scanf("%d", &y);
        if (scanf("%d %d", &x, &y) != 2) break;

        move(&Robot1, x, y);
        printf("이동된 위치 : (%d, %d)\n", Robot1.p.x, Robot1.p.y);
    }
}

void move(Rb* r, int dx, int dy) {
    r->p.x += dx;
    r->p.y += dy;
}