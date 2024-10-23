#include "main.h"


/**
 * main - This is the main function
 * 
 * Return: 0 on success -1 on failure
 */
int main(){

    dll *head = NULL;

    print_list(head);
    pop_begin(&head);
    print_list(head);
    
    append(&head, 20);
    print_list(head);
    pop_begin(&head);
    print_list(head);
    append(&head, 30);
    print_list(head);
    append(&head, 40);
    print_list(head);
    rev(&head);
    print_list(head);
    pop_begin(&head);


    pop_index(&head, 2);
    pop_end(&head);
    print_list(head);


    append(&head, 50);
    append(&head, 70);
    print_list(head);

    rev(&head);
    print_list(head);
    
    pop_begin(&head);
    pop_begin(&head);


    pop_index(&head, 5);
    pop_end(&head);
    print_list(head);

    append(&head, 80);
    pop_end(&head);
    print_list(head);


    append(&head, 90);
    print_list(head);

    pop_index(&head, 0);
    print_list(head);

    append(&head, 10);
    print_list(head);

    pop_index(&head, 20);
    pop_end(&head);
    print_list(head);

    append(&head, 19);
    append(&head, 18);
    append(&head, 10);
    append(&head, 5);
    append(&head, 4);
    append(&head, 3);
    append(&head, 2);
    append(&head, 1);
    print_list(head);
    rev(&head);
    print_list(head);
    
    

    return 0;
}