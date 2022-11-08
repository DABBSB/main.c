#include <stdio.h>
#include <malloc.h>

//用二叉链表来表示二叉树
//1创建二叉树节点结构体
typedef char ElementType;
typedef struct node {
    //数据项
    ElementType data;
    //地址项
    struct node *left;
    struct node *right;
} BTNode, *BtNode;

//2.创建一个节点,存储数据
BTNode *createBTNode(ElementType data) {
    //创建节点
    BTNode *node = malloc(sizeof(BTNode));
    //存储数据
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void level(BtNode BT) {
    if (BT == NULL) {
        return;
    }
    BtNode queue[5000];
    BtNode p;

    int till = 0, head = 0;
    queue[till++] = BT;

    while (head != till) {
        p = queue[head++];
        printf(" %c", p->data);
        if (p->left) { queue[till++] = p->left; }
        if (p->right) { queue[till++] = p->right; }
    }

}

int main() {
    //创建六个节点并存储数据
    BTNode *nodeA = createBTNode('A');
    BTNode *nodeB = createBTNode('B');
    BTNode *nodeD = createBTNode('D');
    BTNode *nodeF = createBTNode('F');
    BTNode *nodeI = createBTNode('I');
    BTNode *nodeL = createBTNode('L');
    //并连接成树
    nodeA->left = nodeB;
    nodeA->right = nodeD;
    nodeB->right = nodeF;
    nodeF->left = nodeL;
    nodeD->left = nodeI;
    //四种遍历方法
    level(nodeA);
    return 0;
}
