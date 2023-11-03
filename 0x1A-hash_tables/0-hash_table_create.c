#include "hash_tables.h"

/**
 * hash_table_create - it creates a hash table
 * @size: array sizu
 * Return: pointer to the created hash_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_tt;
	unsigned long int i;

	hash_tt = malloc(sizeof(hash_table_t));
	if (hash_tt == NULL)
		return (NULL);
	hash_tt->size = size;
	hash_tt->array = malloc(size * sizeof(hash_node_t *));
	if (hash_tt->array == NULL)
	{
		free(hash_tt);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		hash_tt->array[i] = NULL;
	return (hash_tt);
}
