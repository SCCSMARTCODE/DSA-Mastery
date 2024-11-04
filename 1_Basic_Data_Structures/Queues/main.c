#include "queue.h"


int main(){
    queue *head = NULL;
    queue *tail = NULL;


    enqueue(&head, &tail, 1);
    enqueue(&head, &tail, 2);
    enqueue(&head, &tail, 3);
    dequeue(&tail);

    enqueue(&head, &tail, 4);
    enqueue(&head, &tail, 5);
    dequeue(&tail);

    enqueue(&head, &tail, 6);
    enqueue(&head, &tail, 7);
    enqueue(&head, &tail, 8);
    dequeue(&tail);

    enqueue(&head, &tail, 9);
    enqueue(&head, &tail, 10);
    dequeue(&tail);

    enqueue(&head, &tail, 11);
    enqueue(&head, &tail, 12);
    enqueue(&head, &tail, 13);
    dequeue(&tail);

    enqueue(&head, &tail, 14);
    enqueue(&head, &tail, 15);
    dequeue(&tail);
    
    enqueue(&head, &tail, 16);
}