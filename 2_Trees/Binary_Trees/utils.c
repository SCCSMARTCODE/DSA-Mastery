#include "b_tree.h"


void insertNode(BinaryTree *tree, int val) {
    Node *new_node = malloc(sizeof(Node));
    new_node->value = val;
    new_node->left = NULL;
    new_node->right = NULL;

    if (!tree->root) {
        tree->root = new_node;
        return;
    }

    Queue q = {NULL, NULL};
    enqueue(&q, tree->root);

    while (q.front) {
        Node *current = dequeue(&q);

        if (!current->left) {
            current->left = new_node;
            break;
        } else {
            enqueue(&q, current->left);
        }

        if (!current->right) {
            current->right = new_node;
            break;
        } else {
            enqueue(&q, current->right);
        }
    }
}


void enqueue(Queue *q, Node *node) {
    QueueNode *newQueueNode = malloc(sizeof(QueueNode));
    newQueueNode->node = node;
    newQueueNode->next = NULL;
    if (q->rear) q->rear->next = newQueueNode;
    q->rear = newQueueNode;
    if (!q->front) q->front = newQueueNode;
}

Node *dequeue(Queue *q) {
    if (!q->front) return NULL;
    QueueNode *temp = q->front;
    Node *node = temp->node;
    q->front = q->front->next;
    if (!q->front) q->rear = NULL;
    free(temp);
    return node;
}


void preorder(Node *node) {
    if (node == NULL) return;
    printf("%d ", node->value);
    preorder(node->left);
    preorder(node->right);
}

void inorder(Node *node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%d ", node->value);
    inorder(node->right);
}

void postorder(Node *node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->value);
}

void level_order(BinaryTree *tree) {
    if (tree->root == NULL) return;

    Queue q = {NULL, NULL};
    enqueue(&q, tree->root);

    while (q.front != NULL) {
        Node *node = dequeue(&q);
        printf("%d ", node->value);

        if (node->left != NULL) {
            enqueue(&q, node->left);
        }

        if (node->right != NULL) {
            enqueue(&q, node->right);
        }
    }
}


void freeTree(Node *node) {
    if (node == NULL) return;
    
    freeTree(node->left);
    freeTree(node->right);

    free(node);
}