#include <iostream>

typedef struct list {
    int num;
    list* next;
}list;

int main() {
    list a = { 10,NULL }, b = { 20,NULL }, c = { 30,NULL };
    list* head = &a, * current;

    a.next = &b;
    b.next = &c;
    current = head;

    while (current != NULL) {
        printf("%d ", current->num);
        current = current->next;
    }
    printf("\n");
}