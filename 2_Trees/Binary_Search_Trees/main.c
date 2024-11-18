#include "bs_tree.h"

int main() {
    // Step 1: Initialize the binary search tree
    BST tree;
    tree.root = NULL;

    // Step 2: Insert nodes into the BST
    insertNode(&tree, 11);
    insertNode(&tree, 6);
    insertNode(&tree, 8);
    insertNode(&tree, 19);
    insertNode(&tree, 4);
    insertNode(&tree, 10);
    insertNode(&tree, 5);
    insertNode(&tree, 17);
    insertNode(&tree, 43);
    insertNode(&tree, 49);
    insertNode(&tree, 31);

    // Step 3: Perform BST traversals
    printf("In-order Traversal: \n");
    inorder(tree.root);
    printf("\n");

    printf("Pre-order Traversal: \n");
    preorder(tree.root);
    printf("\n");

    printf("Post-order Traversal: \n");
    postorder(tree.root);
    printf("\n");

    deleteNode(tree.root, 4);
    deleteNode(tree.root, 10);
    deleteNode(tree.root, 43);

    printf("In-order Traversal after deletion of 4, 10, 43: \n");
    inorder(tree.root);
    printf("\n");

    freeTree(tree.root);

    return 0;
}
