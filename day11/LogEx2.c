// 1. 총 핑 요청 횟수
// 2. 가장많은 핑을 요청한 주소는?
// 3. 시간대별 핑 요청 횟수 및 가장 잦은 ip

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FOLD "workspace/"

typedef struct Ping {
    int num; // 몇회
    char* Ip; //Ip
    int hour[25];
}P;

int main() {
    FILE* fp;
    char filename[30] = FOLD;
    strcat(filename, "fastlog.txt");

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("파일이 열리지않음.\n");
        return 1;
    }
    char buffer[1024];
    int ping_count = 0, Ip4_ping = 0;
    int all_ping_count = 0, memory_count = 0;
    char find[] = "IPv6";
    int read_IPv4 = 0;
    P* ping = NULL;

    int month, day, year, hour, minute, second;

    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        int index = -1;
        char* IP_start;
        char* port_num;

        sscanf(buffer, "%d/%d/%d-%d:%d:%d",
            &month, &day, &year, &hour, &minute, &second);

        if (strstr(buffer, find) != NULL) //IPv6
        {
            char* arrow;
            if ((arrow = strstr(buffer, " ->")) != NULL) { //IP6에서 -> 부분
                *arrow = '\0';
            }
            IP_start = strrchr(buffer, ' ');

            if (IP_start != NULL) {
                IP_start = IP_start + 1; //찾은값이 공백이므로
                port_num = strrchr(IP_start, ':');
                *port_num = '\0';
                if (ping != NULL) {
                    for (int i = 0;i < memory_count;i++) {
                        if (strcmp(ping[i].Ip, IP_start) == 0) {
                            index = i;
                            break;
                        }
                    }
                }
                ping_count++;
            }
        }
        else //IPv4
        {
            if (read_IPv4) {
                read_IPv4 = 0;
                continue;
            }

            read_IPv4 = 1; //ipv4는 핑을 보낸후 회신핑이므로 하나 삭제하기 위해서

            char* arrow;
            if ((arrow = strstr(buffer, " ->")) != NULL) { //IP6에서 -> 부분
                *arrow = '\0';
            }
            IP_start = strrchr(buffer, ' ');
            if (IP_start != NULL) {
                IP_start = IP_start + 1; //찾은값이 공백이므로
                port_num = strrchr(IP_start, ':');
                *port_num = '\0';
                if (ping != NULL) {
                    for (int i = 0;i < memory_count;i++) {
                        if (strcmp(ping[i].Ip, IP_start) == 0) {
                            index = i;
                            break;
                        }
                    }
                }
                Ip4_ping++;
            }
        }

        if (index == -1) {
            memory_count++;
            ping = (P*)realloc(ping, sizeof(P) * memory_count);

            ping[memory_count - 1].num = 1;
            ping[memory_count - 1].Ip = (char*)malloc(strlen(IP_start) + 1);
            strcpy(ping[memory_count - 1].Ip, IP_start);
            ping[memory_count - 1].hour[hour] = 1; //시간대 추가
        }
        else {
            ping[index].num++;
            ping[index].hour[hour]++;
        }


        all_ping_count = ping_count + Ip4_ping;
    }

    printf("총 핑의 개수 : %d개\n\n", all_ping_count);

    for (int i = 0;i < memory_count;i++) {
        printf("Ip : %s, 총 %d회\n", ping[i].Ip, ping[i].num);
    }
    printf("\n시간대별 출력\n");


    for (int j = 1;j < 25;j++) {
        int max = 0;
        int index = -1;
        for (int i = 0;i < memory_count;i++) {
            if (max < ping[i].hour[j]) {
                max = ping[i].hour[j];
                index = i;
            }
        }
        if (ping[index].Ip == NULL) continue;
        printf("Ip : %s, %2d시에 총%2d회\n", ping[index].Ip, j, ping[index].hour[j]);
    }
    printf("\n");

    free(ping);
}
