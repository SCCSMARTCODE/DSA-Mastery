#include "stack.h"


void push(stack_node **top, int value) {
    stack_node* new_node = (stack_node*)malloc(sizeof(stack_node));
    
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->val = value;
    new_node->ptr = *top;
    *top = new_node;

}

void peek(stack_node *top){
    printf("\nstack peak --> val[ %d ] --> loc[ %p ]\n", top->val, (void *)top->ptr);
}

void pop(stack_node **top) {
    stack_node *temp = *top;
    *top = (*top)->ptr;
    free(temp);
}


void display(stack_node* top) {
    if (!top) {
        printf("\nLinked List is empty\n\n");
        return;
    }

    printf("\n========= Visualizing Stack =========\n");
    
    int idx = 0;
    stack_node* temp = top;

    while (temp) {
        printf("idx[ %d ]---value[ %d ]---ptr[ %p ]\n", idx++, temp->val, (void*)temp->ptr);
        temp = temp->ptr;
    }

    printf("========= Visualizing Ended =========\n\n");
}

void clear(stack_node **top){
    stack_node *temp = *top;
    while(temp){
        *top = (*top)->ptr;
        free(temp);
        temp = *top;
    }
}