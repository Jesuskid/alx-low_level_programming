#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * hash_table_t - creates a new hash table in memory
 * @size: size of the hash table
 * Return: returns a hash table.
 */

hash_table_t *hash_table_create(unsigned long int size){
    hash_node_t nodes[size];
    hash_table_t hash_table = {.size=size, .array=nodes};

    return &hash_table;
}