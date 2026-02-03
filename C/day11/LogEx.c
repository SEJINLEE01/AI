#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define FOLD "workspace/"

typedef struct ERROR {
    int num; // 몇회
    char* name; //에러 종류
}ERR;

int main() {
    FILE* fp;
    char* filename;
    char Find[] = "ERROR";
    int length = 30;
    filename = (char*)malloc(sizeof(char) * length);
    strcat(filename, FOLD);
    strcat(filename, "log.txt");

    if ((fp = fopen(filename, "r")) == NULL) {
        printf("파일이 열리지않음.\n");
        return 1;
    }

    char buffer[1024];
    int Err_count = 0;
    ERR* err = NULL;
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        char* err_name = buffer + 8; //앞에 [ERROR]삭제
        buffer[strlen(buffer) - 1] = '\0'; //줄바꿈 삭제
        if (strstr(buffer, Find) != NULL) {
            int index = -1;
            for (int i = 0;i < Err_count;i++) {
                if (strcmp(err[i].name, err_name) == 0) {
                    index = i;
                    break;
                }
            }

            if (index == -1) { //새로운 에러라면 새로넣기
                Err_count++;
                err = (ERR*)realloc(err, sizeof(ERR) * Err_count);
                err[Err_count - 1].num = 1;
                err[Err_count - 1].name = (char*)malloc(sizeof(err_name) + 1);
                strcpy(err[Err_count - 1].name, err_name);
            }
            else err[index].num++; //이미 들어온 에러라면 숫자 늘리기
        }
    }

    int count = 0;
    for (int i = 0;i < Err_count;i++) {
        printf("에러검출, 에러의 종류 : %s, 총 %d회\n", err[i].name, err[i].num);
        count += err[i].num;
        free(err[i].name);
    }
    printf("총 에러 개수 : %d회\n", count);

    fclose(fp);
    free(filename);
    free(err);
}