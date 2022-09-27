#include <stdio.h>
#include <stdlib.h>

typedef int E;

typedef struct Node {
    E data;
    struct Node *next;
} Node;

//Node *initList() {
//    Node *List = (Node *) malloc(sizeof(Node));
//    List->next = NULL;
//    List->data = 0;
//    return List;
//};


Node *creatList() {
    Node *head = (Node *) malloc(sizeof(Node));
    Node *currnet = (Node *) malloc(sizeof(Node));
    Node *new = (Node *) malloc(sizeof(Node));
    currnet = head;
    E data;
    printf("-1结束");
    while (scanf("%d", &data) && (data != -1)) {
        Node *new = malloc(sizeof(Node *));

        new->data = data;

        currnet->next = new;
        //当前节点后移
        currnet = new;

        currnet->next = NULL;
        return head;
    }
}


int main() {
    Node *head = NULL;
    head = (Node *) malloc(sizeof(Node));
    Node *first = NULL;
    first = (Node *) malloc(sizeof(Node));
    Node *second = NULL;
    second = (Node *) malloc(sizeof(Node));
    Node *third = NULL;
    third = (Node *) malloc(sizeof(Node));
    first->data = 1;
    second->data = 2;
    third->data = 3;

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

//    head = head->next;
//    while (head) {
//        printf("%d\n", head->data);
//        head = head->next;
//    }

    Node *headkkk = creatList();
    Node *tmpNode = headkkk->next; ;


    while (tmpNode != NULL) {
        printf("%d\n", tmpNode->data);
        tmpNode = tmpNode->next;
    }

    return 0;
}
