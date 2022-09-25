#include <stdio.h>

#define MAXSIZE 100

typedef int ElementType;
//定义一个线性表
typedef struct {
    ElementType arr[MAXSIZE];
    int len;
} SqList;

//实现插入
/*
 * 输入：表，位置，元素
 * 1<=pos<=len
 * 输出：没有
 * */
void insert(SqList *list, int pos, ElementType x) {

    if (pos < 1 || pos > list->len) {
        printf("输入正确的范围");
    } else {
        //先移动，从后往前移动
        for (int i = list->len - 1; i >= pos - 1; i--) {
            list->arr[i + 1] = list->arr[i];
        }
        //进行插入
        //list->arr[i+1]=x;
        list->arr[pos - 1] = x;
        //变更长度
        list->len++;
    }
}
int main() {
    SqList list = {1, 2, 3, 4, 5, 6};
    list.len = 6;
    printf("插入前的顺序表\n");
    for (int i = 0; i < list.len; ++i) {
        printf("%d ", list.arr[i]);

    }
    insert(&list, 2, 9);
    printf("\n插入后的顺序表\n");
    for (int i = 0; i < list.len; ++i) {
        printf("%d ", list.arr[i]);

    }
    return 0;
}
