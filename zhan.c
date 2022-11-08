#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *top;
} Node;

Node *initStack() {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = 0;
    node->top = NULL;
    return node;
}

int isEmpty(Node *S) {
    if (S->top == NULL || S->data == 0) {
        return -1;
    } else {
        return 0;
    }
}

void push(Node *S, int data) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->top = S->top;
    S->top = node;
    S->data++;
}

int pop(Node *S) {
    if (isEmpty(S) == -1) {
        return -1;
    } else {
        Node *node = S->top;
        int data = node->data;
        S->top = node->top;
        free(node);
        return data;
    }
}

void print(Node *S) {
    Node *node = S->top;
    while (node) {
        printf("%d", node->data);
        node = node->top;
    }
    printf("NULL");
}

int main() {
    Node *node = initStack();
    printf("%d", pop(node));

}
