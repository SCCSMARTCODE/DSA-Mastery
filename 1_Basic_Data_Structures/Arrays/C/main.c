#include "array.h"

/**
 * main - This is the main function that wants to help me manage the array operations
 * 
 * Returns: void
 */
int main(void){
    char command[MAX_COMMAND_LENGTH];
    char *available_commands[][2] = {
                        {"create","CREATE"}, 
                        {"insert", "INSERT"}, 
                        {"delete", "DELETE"}, 
                        {"search", "SEARCH"}, 
                        {"fill", "FILL"}, 
                        {"print", "PRINT"}
                        // {"exit", "EXIT"}
                    };
    operations_arr operation[] = {create, insert, delete, search, fill, print_array};
    long *array = NULL;
    long array_size;
    bool success_exec;


    printf("\t\t\tWelcome to array!\n");
    printf("Array Operations.\n\t- create\n\t- insert\n\t- delete\n\t- search\n\t- fill\n\t- print\n\t- exit\n\n");
    while (true){
        
        printf(">>> ");
        if (fgets(command, sizeof(command), stdin) != NULL){

            command[strcspn(command, "\n")] = '\0';

            if (strlen(command) >= MAX_COMMAND_LENGTH -1){
                clear_buffer();
                continue;
            }
            
        }

        success_exec = false;

        for (size_t i = 0; i < sizeof(available_commands)/sizeof(available_commands[0]); ++i){
            if (strcmp(command, available_commands[i][0]) == 0 || strcmp(command, available_commands[i][1]) == 0){
                
                operation[i](&array, &array_size);
                success_exec = true;
                
                break;
            }
            else if (strcmp(command, "exit") == 0 || strcmp(command, "EXIT") == 0) {
                    exit_array(&array);
                    return 0;
                }
            
        }

        if (!success_exec){
            printf("Command not FOUND\n");
        }
        
    }

    return 0;
}