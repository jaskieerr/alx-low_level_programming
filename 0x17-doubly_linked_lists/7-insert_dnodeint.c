#include "lists.h"

/**
 * insert_dnodeint_at_index - it inserts a new node at a given position.
 * @h: head pointer
 * @idx: index where to insert the node
 * @n: data to be appended
 * Return: new node pointea,NULL if failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *next_node, *current_one;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current_one = *h;
		for (i = 0; i < idx - 1 && current_one != NULL; i++)
			current_one = current_one->next;
		if (current_one == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		next_node = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current_one;
		next_node = current_one->next;
		current_one->next = new_node;
	}
	new_node->next = next_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
