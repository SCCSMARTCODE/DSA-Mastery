#ifndef BS_TREE
#define BS_TREE

#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;

typedef struct BST{
    Node *root;
} BST;



void insertNode(BST *tree, int val);
void deleteNode(Node *node, int val);

void preorder(Node *node);
void inorder(Node *node);
void postorder(Node *node);
void freeTree(Node *node);
void print_node(Node *node);

#endif
