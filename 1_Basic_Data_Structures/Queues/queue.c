#include "queue.h"

void enqueue(queue **head, queue **tail, int val){
    printf("ops ( enqueue )\n");
    queue *new_node = (queue *)malloc(sizeof(queue));
    if (!new_node){
        printf("Memory Allocation Failed\n");
        return;
    }
    new_node->val = val;


    if (!(*head)){
        *head = new_node;
        *tail = new_node;
        (*head)->next = new_node;
        (*head)->prev = new_node;
        return;
    }

    new_node->prev = *tail;
    new_node->next = *head;

    (*tail)->next = new_node;
    *tail = new_node;
    (*head)->prev = new_node;

    print_queue(head);
}

void dequeue(queue **tail){
    printf("ops ( dequeue )\n");

    if (!*tail){
        return;
    }
    
    queue *temp = *tail;
    (*tail)->prev->next = (*tail)->next;
    (*tail)->next->prev = (*tail)->prev;

    
    *tail = temp->prev;
    free(temp);
}

void print_queue(queue **head){
    if (!*head){
        printf("QUEUE is Empty\n");
    }
    else if(*head == (*head)->prev){
        printf("idx [ 0 ] == val [ %d ]\n", (*head)->val);
    }
    else{
        queue *temp = *head;
        int idx = 0;
        do{
            printf("idx [ %d ] == val [ %d ]\n", ++idx, temp->val);
            temp = temp->next;
        }
        while(temp != *head);
    }
    printf("===============[ End of QUEUE ]===============\n\n\n");

}