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

void pop_index(sll **head, int index){
    if (index < 0 || *head == NULL){
        return;
    }

    sll *temp = *head;
    sll *prev = NULL;
    int i = 0;
    while (temp){
        if (i++ == index){
            if (!prev){
                *head = temp->ptr;
                free(temp);
                return;
            }
            prev->ptr = temp->ptr;
            free(temp);
            return;
        }
        prev = temp;
        temp = temp->ptr;
    }
}

void pop_begin(sll **head){
    pop_index(head, 0);
}


void pop_end(sll **head){
    int end_idx = len(head) - 1;
    pop_index(head, end_idx);
}

int len(sll **head){
    if (*head == NULL){
        return 0;
    }
    int ll_len = 0;
    sll *temp = *head;

    while(temp->ptr){
        ll_len++;
        temp = temp->ptr;
    }
    return ++ll_len;
}

void rev(sll **head){
    if (*head == NULL){
        return;
    }

    sll *temp = *head;
    sll *prev = NULL;
    sll *next = NULL;

    while (temp->ptr){
        next = temp->ptr;
        temp->ptr = prev;
        prev = temp;
        temp = next;
    }

    temp->ptr = prev;
    *head = temp;
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