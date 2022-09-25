#include <stdio.h>

#define MAXSIZE 100

typedef int ElementType;

typedef struct {
    ElementType arr[MAXSIZE];
    int len;
} SqList;

void insert(int pos, ElementType x, SqList *sqList) {
    if (pos < 1 || pos > sqList->len) {
        printf("KKK");
    } else {
        for (int i = sqList->len - 1; i >= pos - 1; i--) {
            sqList->arr[i + 1] = sqList->arr[i];
        }
        sqList->arr[pos - 1] = x;
        sqList->len++;
    }
}
int main() {
    SqList list = {1, 2, 3, 4, 5, 6};
    list.len = 6;
    for (int i = 0; i < list.len; ++i) {
        printf("%d", list.arr[i]);
    }
    printf("\n");
    insert(3, 9, &list);
    for (int i = 0; i < list.len; ++i) {
        printf("%d", list.arr[i]);
    }
    return 0;

}


