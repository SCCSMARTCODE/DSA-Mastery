#include "main.h"

void append(csll** head, int value) {
    csll* new_node = (csll*)malloc(sizeof(csll));
    
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->number = value;
    new_node->ptr = *head;

    if (!(*head)) {
        *head = new_node;
        new_node->ptr = new_node;
        return;
    }

    csll* temp = *head;
    while (temp->ptr != *head) {
        temp = temp->ptr;
    }

    temp->ptr = new_node;
}

void pop_index(csll **head, int index){
    if (index < 0 || *head == NULL){
        return;
    }

    csll *temp = *head;
    csll *prev = NULL;
    csll* temp_temp = NULL;
    int i = 0;
    do{
        if (i++ == index){
            if (!prev){
                *head = temp->ptr;
                temp_temp = temp;

                while (temp_temp->ptr != temp){
                    temp_temp = temp_temp->ptr;
                }
                temp_temp->ptr = *head;
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
    while (temp != *head);
}

void pop_begin(csll **head){
    pop_index(head, 0);
}


void pop_end(csll **head){
    int end_idx = len(head) - 1;
    pop_index(head, end_idx);
}

int len(csll **head){
    if (*head == NULL){
        return 0;
    }
    int ll_len = 0;
    csll *temp = *head;

    while(temp->ptr != *head){
        ll_len++;
        temp = temp->ptr;
    }
    return ++ll_len;
}

void rev(csll **head){
    if (*head == NULL){
        return;
    }

    csll *temp = *head;
    csll *prev = NULL;
    csll *next = NULL;

    while (temp->ptr != *head){
        next = temp->ptr;
        temp->ptr = prev;
        prev = temp;
        temp = next;
    }

    temp->ptr = prev;
    (*head)->ptr = temp;
    *head = temp;
}


void print_list(csll* head) {
    if (!head) {
        printf("=================\nLinked List is empty\n");
        printf("Total len is [ %d ]\n=================\n\n\n", len(&head));
        return;
    }
    

    printf("========= Visualizing List =========\n");
    
    int idx = 0;
    csll* temp = head;

    do{
        printf("idx[ %d ]---value[ %d ]---ptr[ %p ]\n", idx++, temp->number, (void*)temp->ptr);
        temp = temp->ptr;
    }
    while(temp != head);

    printf("========= Visualizing Ended =========\n");
    printf("Total len is [ %d ]\n\n\n", len(&head));
}