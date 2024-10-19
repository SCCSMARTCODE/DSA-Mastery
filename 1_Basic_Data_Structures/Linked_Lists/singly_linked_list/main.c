#include "main.h"


/**
 * main - This is the main function
 * 
 * Return: 0 on success -1 on failure
 */
int main(){

    sll *head = NULL;

    print_list(head);
    
    append(&head, 20);

    append(&head, 30);
    append(&head, 40);
    print_list(head);


    append(&head, 50);
    append(&head, 70);
    append(&head, 80);
    print_list(head);


    append(&head, 90);
    append(&head, 10);
    print_list(head);

    return 0;
}