#include "main.h"

void append(cdll** head, int value) {
    cdll* new_node = (cdll*)malloc(sizeof(cdll));

    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }

    new_node->number = value;
    new_node->next = *head;

    if (!(*head)) {
        *head = new_node;
        new_node->prev = *head;
        new_node->next = *head;
        return;
    }

    cdll* temp = *head;
    while (temp->next != *head) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
    (*head)->prev = new_node;
}


void pop_index(cdll **head, int index){
    if (index < 0 || *head == NULL){
        return;
    }

    cdll *temp = *head;
    int i = 0;
    do {
        if (i++ == index){
            if (temp == *head){
                if (temp->next == *head){
                    *head = NULL;
                    free(temp);
                    return;
                }
                *head = temp->next;
                (*head)->prev = temp->prev;
                temp->prev->next = *head;
                free(temp);
                return;
                
            }
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            free(temp);
            return;
        }
        temp = temp->next;
    }
    while(temp != *head);
}

void pop_begin(cdll **head){
    pop_index(head, 0);
}


void pop_end(cdll **head){
    int end_idx = len(head) - 1;
    pop_index(head, end_idx);
}

int len(cdll **head){
    if (*head == NULL){
        return 0;
    }
    int ll_len = 0;
    cdll *temp = *head;

    while(temp->next != *head){
        ll_len++;
        temp = temp->next;
    }
    return ++ll_len;
}

void rev(cdll **head){
    if (*head == NULL){
        return;
    }

    cdll *temp = *head;
    cdll *temp_temp = NULL;

    do {
        temp_temp = temp;
        temp->next = temp->prev;
        temp->prev = temp_temp->next;

        temp = temp->prev;
    }
    while (temp != *head);

    *head = temp->next;
}


void print_list(cdll* head){
    if (!head) {
        printf("====Linked List is empty====\n");
        printf("Total len is [ %d ]\n==============================\n\n\n", len(&head));
        return;
    }

    printf("========= Visualizing List =========\n");
    
    int idx = 0;
    cdll* temp = head;

    do{
        printf("idx[ %d ]---value[ %d ]---prev[ %p ]---next[ %p ]\n", idx++, temp->number, (void*)temp->prev, (void*)temp->next);
        temp = temp->next;
    }
    while (temp != head);

    printf("========= Visualizing Ended =========\n");
    printf("Total len is [ %d ]\n\n\n", len(&head));
}