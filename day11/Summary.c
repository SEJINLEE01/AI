#include <stdio.h>

void print_equal(int a) {
    for (int i = 0;i < a;i++)
        printf("=");
}

void print_menu() {
    printf("\n");
    print_equal(3); printf(" 이동 로봇 종합 계산기 "); print_equal(3);
    printf("\n1. 바퀴별 속도 계산(v, w -> vl, vr)\n");
    printf("2. 배터리 사용시간 계산\n");
    printf("3. 모터 토크 계산\n");
    printf("4. 센서 정규화 계산\n");
    printf("5. 오차율 계산\n");
    printf("0. 종료\n");
    printf("메뉴를 선택하십시오 : ");
}

int main() {
    int menu;
    print_equal(3); printf(" 이동로봇 기본 사양 입력 "); print_equal(3);
    //기본사양 변수 및 입력
    while (1) {
        print_menu();
        scanf("%d", &menu);

        if (menu == 1) {
            //로직
        }
        else if (menu == 2) {
            //로직
        }
        else if (menu == 3) {
            //로직
        }
        else if (menu == 4) {
            //로직
        }
        else if (menu == 5) {
            //로직
        }
        else if (menu == 0)
            break;
    }
}