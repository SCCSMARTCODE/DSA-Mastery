#ifndef B_TREE
#define B_TREE

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;

typedef struct BinaryTree {
    Node *root;
} BinaryTree;

typedef struct QueueNode {
    Node *node;
    struct QueueNode *next;
} QueueNode;

typedef struct Queue {
    QueueNode *front;
    QueueNode *rear;
} Queue;

void insertNode(BinaryTree *tree, int val);

void preorder(Node *node);
void inorder(Node *node);
void postorder(Node *node);
void level_order(BinaryTree *tree);
void enqueue(Queue *q, Node *node);
void freeTree(Node *node);
Node *dequeue(Queue *q);

#endif
