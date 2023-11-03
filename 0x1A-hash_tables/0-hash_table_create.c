#include "hash_tables.h"

/**
 * hash_table_create - it creates a hash table
 * @size: array sizu
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *the_ht;
	hash_node_t **the_arr;
	unsigned long int i;

	the_ht = malloc(sizeof(hash_table_t));
	if (the_ht == NULL)
		return (NULL);

	the_arr = malloc(sizeof(hash_node_t *) * size);
	if (the_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		the_arr[i] = NULL;

	the_ht->the_arr = the_arr;
	the_ht->size = size;

	return (the_ht);
}
