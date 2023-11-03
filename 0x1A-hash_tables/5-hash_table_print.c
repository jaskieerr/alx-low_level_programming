#include "hash_tables.h"

/**
 * hash_table_print - prints hash table ellements
 * @ht: hash table pointer
 * Return: NADA
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, counter = 0;
	hash_node_t *hasnode;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hasnode = ht->array[i];
			while (hasnode != NULL)
			{
				if (counter > 0)
					printf(", ");
				printf("'%s': '%s'", hasnode->key, hasnode->value);
				hasnode = hasnode->next;
				counter++;
			}
		}
	}
	printf("}\n");
}
