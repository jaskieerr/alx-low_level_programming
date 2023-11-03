#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table ptr
 * @key: hash key
 * @value: value to be added
 * Return: ins
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idk = 0;
	hash_node_t *nodejdida = NULL, *o_head = NULL;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	nodejdida = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (nodejdida == NULL)
		return (0);
	idk = key_index((const unsigned char *) key, ht->size);
	nodejdida->key = (char *) strdup(key);
	nodejdida->value = (char *) strdup(value);
	nodejdida->next = NULL;
	if ((ht->array)[idk] == NULL)
	{
		(ht->array)[idk] = nodejdida;
		return (1);
	}
	else
	{
		o_head = (ht->array)[idk];
		while (o_head)
		{
			if (strcmp(o_head->key, key) == 0)
			{
				free(o_head->value);
				o_head->value = (char *) strdup(value);
				free(nodejdida->key);
				free(nodejdida->value);
				free(nodejdida);
				return (1);
			}
			o_head = o_head->next;
		}
		o_head = (ht->array)[idk];
		nodejdida->next = o_head;
		(ht->array)[idk] = nodejdida;
		return (1);
	}
}
