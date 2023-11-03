#include "hash_tables.h"

/**
 * hash_table_get - fetches the value
 * @ht: hash t  ptr
 * @key: hash key
 * Return: the value fetched
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	key_idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[key_idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
