#include "b_tree.h"

int main() {
    // Step 1: Initialize the binary tree
    BinaryTree tree;
    tree.root = NULL;

    // Step 2: Insert nodes into the tree
    insertNode(&tree, 10);
    insertNode(&tree, 20);
    insertNode(&tree, 30);
    insertNode(&tree, 40);
    insertNode(&tree, 50);
    insertNode(&tree, 60);
    insertNode(&tree, 70);

    // Step 3: Perform tree traversals
    printf("In-order Traversal: ");
    inorder(tree.root);
    printf("\n");

    printf("Pre-order Traversal: ");
    preorder(tree.root);
    printf("\n");

    printf("Post-order Traversal: ");
    postorder(tree.root);
    printf("\n");

    printf("Level-order Traversal: ");
    level_order(&tree);
    printf("\n");

    freeTree(tree.root);

    return 0;
}
