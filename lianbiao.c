

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

Node *initList() {
    Node *list = (Node *) malloc(sizeof(Node));
    list->data = 0;
    list->next = NULL;
    return list;
}

void HeadLIst(Node *list, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->next = list->next;
    node->data = data;
    list->next = node;
    list->data++;
}

void tailLIst(Node *list, int data) {
    Node *head = list;
    Node *node = (Node *) malloc(sizeof(Node));
    node->next = NULL;
    node->data = data;
    list = list->next;
    while (list->next) {
        list = list->next;
    }
    list->next = node;
    head->data++;
}

void printList(Node *list) {
    list = list->next;
    while (list) {
        printf("%d", list->data);
        list = list->next;
        printf("\n");
    }
}

int main() {
    Node *List = initList();
    HeadLIst(List, 100860);
    tailLIst(List, 1);
    tailLIst(List, 2);
    tailLIst(List, 3);
    printList(List);
    return 0;
}
