#include "hash.h"


int generate_hash(char *str, size_t hash_dim){
    if (*str == '\0' || str == NULL){
        return -1;
    }

    char step_char = *str;
    int hash_count = 0;

    while (step_char != '\0'){
        hash_count += step_char;
        step_char = *(++str);
    }

    return hash_count % hash_dim;
}

void print_hash_table(dll** arr, size_t hash_dim){
    for(size_t x = 0; x < hash_dim; x++){
        printf("======Viewing Bucket [ %lld ]======\n", x + 1);
        print_list(arr[x]);
    }
}

void insert(dll** arr, char* str, size_t hash_dim){
    int bucket_idx = generate_hash(str, hash_dim);

    append(&arr[bucket_idx], str);
}



// ================== Linked List =========================


void append(dll** head, char* value) {
    if (*value == '\0' || value == NULL){
        return;
    }

    dll* new_node = (dll*)malloc(sizeof(dll));
    
    if (!new_node) {
        printf("Memory allocation failed\n");
        return;
    }

    size_t name_size = 0;

    while (value[name_size] != '\0'){
        name_size++;
    }
    // printf("name [ %s ] size is [ %lld ]\n", value, name_size);

    new_node->name = (char*)malloc(name_size);
    for (size_t x = 0; x <= name_size; x++){
        new_node->name[x] = value[x];
    }
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
        printf("====Bucket is empty====\n");
        printf("Total len is [ %d ]\n==============================\n\n\n", len(&head));
        return;
    }

    // printf("========= Visualizing List =========\n");
    
    int idx = 0;
    dll* temp = head;

    while (temp) {
        printf("idx[ %d ]---name[ %s ]---prev[ %p ]---next[ %p ]\n", idx++, temp->name, (void*)temp->prev, (void*)temp->next);
        temp = temp->next;
    }

    printf("========= Visualizing Ended =========\n");
    printf("Total len is [ %d ]\n\n\n", len(&head));
}