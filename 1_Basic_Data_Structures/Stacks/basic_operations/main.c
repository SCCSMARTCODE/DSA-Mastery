#include "stack.h"


/**
 * main - Implementing stack with linked list
 */

int main(){
    stack_node *top = NULL;

    push(&top, 2);
    push(&top, 3);
    push(&top, 4);

    display(top);
    peek(top);
    pop(&top);
    peek(top);
    display(top);

    clear(&top);
    display(top);
}