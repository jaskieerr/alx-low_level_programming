#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: ptr to ht to be deleted
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *hasnode;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			hasnode = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = hasnode;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
