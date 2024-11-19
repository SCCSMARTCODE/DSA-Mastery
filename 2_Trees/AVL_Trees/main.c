#include "avl_tree.h"

int main() {
    AVLTREE tree = { .root = NULL };

    insertNode(&tree, 10);
    insertNode(&tree, 20);
    insertNode(&tree, 30); 

    insertNode(&tree, 15); 
    deleteNode(&tree, tree.root, 10);
    deleteNode(&tree, tree.root, 30);

    printf("Inorder traversal:\n");
    inorder(tree.root);

    freeTree(tree.root);
    return 0;
}
