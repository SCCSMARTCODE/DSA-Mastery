#include "main.h"

void append(dll** head, int value) {
    dll* new_node = (dll*)malloc(sizeof(dll));
    
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }
    new_node->number = value;
    new_node->next = NULL;

    if (!(*head)) {
        *head = new_node;
        new_node->prev = NULL;
        return;
    }

    dll* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
}

void pop_index(dll **head, int index){
    if (index < 0 || *head == NULL){
        return;
    }

    dll *temp = *head;
    int i = 0;
    while (temp){
        if (i++ == index){
            if (!temp->prev && !temp->next){
                *head = NULL;
                free(temp);
                return;
            }
            if (temp->prev){
                temp->prev->next = temp->next;
            }
            else{
                *head = temp->next;
            }
            if (temp->next){
                temp->next->prev = temp->prev;
            }
            free(temp);
            return;
        }
        temp = temp->next;
    }
}

void pop_begin(dll **head){
    pop_index(head, 0);
}


void pop_end(dll **head){
    int end_idx = len(head) - 1;
    pop_index(head, end_idx);
}

int len(dll **head){
    if (*head == NULL){
        return 0;
    }
    int ll_len = 0;
    dll *temp = *head;

    while(temp->next){
        ll_len++;
        temp = temp->next;
    }
    return ++ll_len;
}

void rev(dll **head){
    if (*head == NULL){
        return;
    }

    dll *temp = *head;
    dll *temp_next = NULL;

    while (temp->next){
        temp_next = temp->next;
        temp->next = temp->prev;
        temp->prev = temp_next;

        temp = temp->prev;
    }

    temp->next = temp->prev;
    temp->prev = NULL;
    *head = temp;
}


void print_list(dll* head){
    if (!head) {
        printf("====Linked List is empty====\n");
        printf("Total len is [ %d ]\n==============================\n\n\n", len(&head));
        return;
    }

    printf("========= Visualizing List =========\n");
    
    int idx = 0;
    dll* temp = head;

    while (temp) {
        printf("idx[ %d ]---value[ %d ]---prev[ %p ]---next[ %p ]\n", idx++, temp->number, (void*)temp->prev, (void*)temp->next);
        temp = temp->next;
    }

    printf("========= Visualizing Ended =========\n");
    printf("Total len is [ %d ]\n\n\n", len(&head));
}