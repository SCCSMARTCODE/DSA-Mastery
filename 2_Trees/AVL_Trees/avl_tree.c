#include "avl_tree.h"


void insertNode(AVLTREE *tree, int val) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->value = val;
    new_node->left = new_node->right = NULL;

    if (!tree->root) {
        tree->root = new_node;
    } else {
        Node *temp = tree->root;
        Node *prev = NULL;

        while (temp) {
            prev = temp;
            if (val < temp->value) {
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        }

        if (val < prev->value) {
            prev->left = new_node;
        } else {
            prev->right = new_node;
        }
    }

    ensure_avl_structure(tree->root, NULL, tree);
}


void deleteNode(AVLTREE *tree, Node *node, int val) {
    if (!node) {
        return;
    }

    Node *temp = node;
    Node *prev = NULL;

    // Find the node to delete
    while (temp) {
        if (val < temp->value) {
            prev = temp;
            temp = temp->left;
        } else if (val > temp->value) {
            prev = temp;
            temp = temp->right;
        } else {
            break;
        }
    }

    if (!temp) {
        return; // Value not found
    }

    // Case 0: No children
    if (!temp->left && !temp->right) {
        if (prev) {
            if (prev->left == temp) prev->left = NULL;
            else prev->right = NULL;
        } else {
            tree->root = NULL;
        }
        free(temp);
    }
    // Case 1: One child
    else if (!temp->left || !temp->right) {
        Node *child = temp->left ? temp->left : temp->right;
        if (prev) {
            if (prev->left == temp) prev->left = child;
            else prev->right = child;
        } else {
            tree->root = child;
        }
        free(temp);
    }
    // Case 2: Two children
    else {
        Node *inorder_predecessor = temp->left;
        Node *inorder_predecessor_parent = temp;

        while (inorder_predecessor->right) {
            inorder_predecessor_parent = inorder_predecessor;
            inorder_predecessor = inorder_predecessor->right;
        }

        temp->value = inorder_predecessor->value;

        if (inorder_predecessor_parent->right == inorder_predecessor) {
            inorder_predecessor_parent->right = inorder_predecessor->left;
        } else {
            inorder_predecessor_parent->left = inorder_predecessor->left;
        }
        free(inorder_predecessor);
    }

    ensure_avl_structure(tree->root, NULL, tree);
}


Node *rotateRight(Node *node) {
    Node *newRoot = node->left;
    node->left = newRoot->right;
    newRoot->right = node;
    return newRoot;
}

Node *rotateLeft(Node *node) {
    Node *newRoot = node->right;
    node->right = newRoot->left;
    newRoot->left = node;
    return newRoot;
}



int ensure_avl_structure(Node *node, Node *prev, AVLTREE *tree) {
    if (!node) {
        return 0;
    }

    int left_height = ensure_avl_structure(node->left, node, tree);
    int right_height = ensure_avl_structure(node->right, node, tree);
    int balance_factor = right_height - left_height;

    // Check balance and perform rotations if needed
    if (balance_factor > 1) { // Right-heavy
        if (node->right && node->right->right) {
            // RR Case
            node = rotateLeft(node);
        } else if (node->right) {
            // RL Case
            node->right = rotateRight(node->right);
            node = rotateLeft(node);
        }
    } else if (balance_factor < -1) { // Left-heavy
        if (node->left && node->left->left) {
            // LL Case
            node = rotateRight(node);
        } else if (node->left) {
            // LR Case
            node->left = rotateLeft(node->left);
            node = rotateRight(node);
        }
    }

    if (!prev) {
        tree->root = node;
    } else {
        if (prev->left == node) {
            prev->left = node;
        } else if (prev->right == node) {
            prev->right = node;
        }
    }

    return (left_height > right_height ? left_height : right_height) + 1;
}


void inorder(Node *node){
    if (!node){
        return;
    }
    inorder(node->left);
    print_node(node);
    inorder(node->right);
}

void preorder(Node *node){
    if (!node){
        return;
    }
    print_node(node);
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node *node){
    if (!node){
        return;
    }
    postorder(node->left);
    postorder(node->right);
    print_node(node);
}

void freeTree(Node *node){
    if (!node){
        return;
    }

    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

void print_node(Node *node){
    // formating output
    printf("val [ %d ] == left [ ", node->value);
    if (!node->left){
        printf("%s", "NULL");
    }
    else{
        printf("%d", node->left->value);
    }
    printf("] right [ ");

    if (!node->right){
        printf("%s", "NULL");
    }
    else{
        printf("%d", node->right->value);
    }
    printf(" ]\n");

     // formating output
}