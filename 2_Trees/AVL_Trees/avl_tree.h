#pragma once

#include <stdlib.h>
#include <stdio.h>
#define UNUSED(x) (void)x


typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;

typedef struct AVLTREE{
    Node *root;
} AVLTREE;



void insertNode(AVLTREE *tree, int val);
void deleteNode(AVLTREE *tree, Node *node, int val);

Node *rotateRight(Node *node);
Node *rotateLeft(Node *node);
int ensure_avl_structure(Node *node, Node *prev, AVLTREE *tree) ;

void preorder(Node *node);
void inorder(Node *node);
void postorder(Node *node);
void freeTree(Node *node);
void print_node(Node *node);