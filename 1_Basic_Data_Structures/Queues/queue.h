#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue
{
    int val;
    struct queue *prev;
    struct queue *next;
} queue;

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


void enqueue(queue **head, queue **tail, int val);
void dequeue(queue **tail);
void print_queue(queue **head);



#endif