#include "main.h"

void append(sll** head, int value) {
    sll* new_node = (sll*)malloc(sizeof(sll));
    
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->number = value;
    new_node->ptr = NULL;

    if (!(*head)) {
        *head = new_node;
        return;
    }

    sll* temp = *head;
    while (temp->ptr != NULL) {
        temp = temp->ptr;
    }

    temp->ptr = new_node;
}

void print_list(sll* head) {
    if (!head) {
        printf("Linked List is empty\n");
        return;
    }

    printf("========= Visualizing List =========\n");
    
    int idx = 0;
    sll* temp = head;

    while (temp) {
        printf("idx[ %d ]---value[ %d ]---ptr[ %p ]\n", idx++, temp->number, (void*)temp->ptr);
        temp = temp->ptr;
    }

    printf("========= Visualizing Ended =========\n");
}