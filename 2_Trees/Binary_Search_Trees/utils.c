#include "bs_tree.h"


void insertNode(BST *tree, int val){
    Node *new_node = (Node *)malloc(sizeof(Node));
    Node *temp = NULL;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->value = val;

    if (!tree->root){
        tree->root = new_node;
        return;
    }

    temp = tree->root;

    while (temp){
        if (val > temp->value){
            if (!temp->right){
                break;
            }
            temp = temp->right;
        }
        else{
            if (!temp->left){
                break;
            }
            temp = temp->left;
        }
    }

    if (val > temp->value){
        temp->right = new_node;
    }
    else{
        temp->left = new_node;
    }
}

void deleteNode(Node *node, int val){
    Node* temp = node;
    Node *prev = NULL;

    while(temp){
        if (val > temp->value){
            prev = temp;
            temp = temp->right;
        }
        else if(val < temp->value){
            prev = temp;
            temp = temp->left;
        }
        else{
            break;
        }
    }

    if(!temp){
        return;
    }

    // Case 0: Node has zero children
    if (!temp->left && !temp->right){
        if (prev->left == temp){
            prev->left = NULL;
        }
        else{
            prev->right = NULL;
        }
            free(temp);
    }
    // Case 2: Node has two children
    else if (temp->left && temp->right) {
        Node *inorder_predecessor_parent = temp;
        Node *inorder_predecessor = temp->left;

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
    // Case 1: Node has one child
    else{

        Node *sub_node;
        if (temp->right){
            sub_node = temp->right;
        }
        else{
            sub_node = temp->left;
        }

        if (prev->left == temp){
            prev->left = sub_node;
        }
        else{
            prev->right = sub_node;
        }
            free(temp);
    }
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