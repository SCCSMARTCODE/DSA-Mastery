#include "hash.h"

/**
 * main - This function handles a hash table data structure
 */
int main(){
    dll* bucket_arr[10] = {};
    size_t hash_dim = sizeof(bucket_arr)/sizeof(bucket_arr[0]);

    insert(bucket_arr, "SMART", hash_dim);
    insert(bucket_arr, "Emmanuel", hash_dim);
    insert(bucket_arr, "Grace", hash_dim);
    insert(bucket_arr, "Julien", hash_dim);
    insert(bucket_arr, "Mark", hash_dim);
    insert(bucket_arr, "Demis", hash_dim);
    insert(bucket_arr, "Hasabis", hash_dim);
    insert(bucket_arr, "Fefeli", hash_dim);

    print_hash_table(bucket_arr, hash_dim);

    
    return 0;
}