#include "hash_tables.h"

/**
 * hash_table_create - it creates a hash table
 * @size: array sizu
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
    hash_table_t *hash_tu;
	
	hash_tu = malloc(sizeof(hash_table_t));
	if (hash_tu == NULL)
		return (NULL);
	hash_tu->size = size;
	hash_tu->array = malloc(size * sizeof(hash_node_t *));
	if (hash_tu->array == NULL)
	{
		free(hash_tu);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_tu->array[i] = NULL;
	return (hash_tu);
}
