#include "array.h"


void clear_buffer(){
    char outlier;
    while ((outlier = getc(stdin)) != '\n' && outlier != EOF){
    }
}

void create(long **array, long *array_size_ptr){

    long *temp = NULL;
    // int *cursor_location = NULL;
    char *endptr = NULL;
    long array_size;
    char array_size_str[MAX_ARRAY_SIZE_LENGTH];

    if(*array){
        printf("You have an existing ARRAY\n");
        return;
    }
    printf("\n[create] mode activated\ninput array size: ");

    if(fgets(array_size_str, MAX_ARRAY_SIZE_LENGTH, stdin)){

        array_size_str[strcspn(array_size_str, "\n")] = '\0';

        errno = 0;
        array_size = strtol(array_size_str, &endptr, 10);

        if (sizeof(array_size_str) > MAX_ARRAY_SIZE_LENGTH*sizeof(char)){
            printf("Invalid input. Please enter a valid integer between 1 and 99.\n");
            clear_buffer();
            return;
        }

        

        if (errno != 0 || *endptr != '\0') {
            printf("Invalid input. Please enter a valid integer.\n");
            return;
        } 
    }

    else {
        printf("Error reading input.\n");
        return;
    }

    printf("========[ creating array ]========\n");
    temp = (long *)malloc(array_size*sizeof(long));

    if (!temp){
        printf("========[ an error occured ]========\n========[array creation failed ]========\n");
        return;
    }

    // flushing the memory
    for(int i = 0; i < array_size; i++){
        temp[i] = 0;
    }

    printf("========[ Array of size %ld created successfully ]========\n", array_size);

    *array = temp;
    *array_size_ptr = array_size;

}


void insert(long **array, long *array_size_ptr){
    if(!*array){
        printf("No Array available for insertion\n");
        return;
    }

    long *temp = *array;
    long array_size = *array_size_ptr;
    char insert_idx_str[MAX_ARRAY_SIZE_LENGTH], insert_value_str[MAX_INT_LENGTH];
    long insert_idx, insert_value;

    printf("\n[insert] mode activated\ninput idx location: ");
    fgets(insert_idx_str, sizeof(insert_idx_str), stdin);

    insert_idx_str[strcspn(insert_idx_str, "\n")] = '\0';

    if (sizeof(insert_idx_str) > MAX_ARRAY_SIZE_LENGTH*sizeof(char)){
        printf("Invalid input. Please enter a valid integer between 1 and 99.\n");
        clear_buffer();
        return;
    }

    char *endptr;
    errno = 0;
    insert_idx = strtol(insert_idx_str, &endptr, 10);

    if (errno != 0 || *endptr != '\0' || insert_idx >= array_size){
        printf("Invalid input. Please enter a valid integer.\n");
        return;
    }


    printf("\nInput idx value: ");
    fgets(insert_value_str, sizeof(insert_value_str), stdin);

    insert_value_str[strcspn(insert_value_str, "\n")] = '\0';

    if (sizeof(insert_value_str) > MAX_INT_LENGTH){
        printf("Invalid input. Please enter a valid integer between 1 and 99999.\n");
        clear_buffer();
        return;
    }

    // char *endptr;
    errno = 0;
    insert_value = strtol(insert_value_str, &endptr, 10);

    if (errno != 0 || *endptr != '\0'){
        printf("Invalid input. Please enter a valid integer.\n");
        return;
    }

    temp[insert_idx] = insert_value;
    printf("========[ value[ %ld ] inserted at idx[ %ld ] successful ]========\n", temp[insert_idx], insert_idx);

}


void delete(long **array, long *array_size_ptr){
    if(!*array){
        printf("No Array available for deletion\n");
        return;
    }

    long *temp = *array;
    long array_size = *array_size_ptr;
    char delete_idx_str[MAX_ARRAY_SIZE_LENGTH];
    long delete_idx;

    printf("\n[delete] mode activated\ninput idx location: ");
    fgets(delete_idx_str, sizeof(delete_idx_str), stdin);

    delete_idx_str[strcspn(delete_idx_str, "\n")] = '\0';

    if (sizeof(delete_idx_str) > MAX_ARRAY_SIZE_LENGTH*sizeof(char)){
        printf("Invalid input. Please enter a valid integer between 0 and 99.\n");
        clear_buffer();
        return;
    }

    char *endptr;
    errno = 0;
    delete_idx = strtol(delete_idx_str, &endptr, 10);

    if (errno != 0 || *endptr != '\0' || delete_idx >= array_size){
        printf("Invalid input. Please enter a valid integer.\n");
        return;
    }

    temp[delete_idx] = 0;
    printf("========[ value[ %ld ] deleted at idx[ %ld ] successful ]========\n", temp[delete_idx], delete_idx);
}


void search(long **array, long *array_size_ptr){
    if(!*array){
        printf("No Array available for searching\n");
        return;
    }

    long *temp = *array;
    long array_size = *array_size_ptr;
    char search_value_str[MAX_INT_LENGTH];
    long search_value;

    printf("\n[search] mode activated\ninput value to search: ");
    fgets(search_value_str, sizeof(search_value_str), stdin);

    search_value_str[strcspn(search_value_str, "\n")] = '\0';

    if (sizeof(search_value_str) > MAX_INT_LENGTH*sizeof(char)){
        printf("Invalid input. Please enter a valid integer between 1 and 99999.\n");
        clear_buffer();
        return;
    }

    char *endptr;
    errno = 0;
    search_value = strtol(search_value_str, &endptr, 10);

    if (errno != 0 || *endptr != '\0'){
        printf("Invalid input. Please enter a valid integer.\n");
        return;
    }
    bool found = false;

    for (int i = 0; i < array_size; i++){
        if (temp[i] == search_value){
            printf("========[ %ld ] found at idx[ %d ]========\n", search_value, i);
            found = true;
        }
    }

    if (!found){
        printf("========[ %ld ] is not found in any of the ARRAY location========\n", search_value);
    }
}


void fill(long **array, long *array_size_ptr){
    if(!*array){
        printf("No Array available for filling\n");
        return;
    }

    long *temp = *array;
    long array_size = *array_size_ptr;
    char fill_value_str[MAX_INT_LENGTH];
    long fill_value;

    printf("\n[fill] mode activated\ninput value to fill: ");
    fgets(fill_value_str, sizeof(fill_value_str), stdin);

    fill_value_str[strcspn(fill_value_str, "\n")] = '\0';

    if (sizeof(fill_value_str) > MAX_INT_LENGTH*sizeof(char)){
        printf("Invalid input. Please enter a valid integer between 1 and 99999.\n");
        clear_buffer();
        return;
    }

    char *endptr;
    errno = 0;
    fill_value = strtol(fill_value_str, &endptr, 10);

    if (errno != 0 || *endptr != '\0'){
        printf("Invalid input. Please enter a valid integer.\n");
        return;
    }

    for (int i = 0; i < array_size; i++){
        temp[i] = fill_value;
    }

    printf("========[ %ld ] fill ARRAY successful========\n", fill_value);
}

void print_array(long **array, long *array_size_ptr){
    if(!*array){
        return;
    }
    printf("===========Printing The ARRAY===========\n");

    for (long i = 0; i < *array_size_ptr; i++){
        printf("idx[ %ld ] = [ %ld ]\n", i, (*array)[i]);
    }

    printf("===========ARRAY printed successfully ===========\n");
}


void exit_array(long **array){
    if(*array){
        free(*array);
        *array = NULL;
    }
    printf("Exiting...\n");
    exit(0);
}

