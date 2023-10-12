#include "lists.h"

/**
 * dlistint_len - returns number elements of linked list
 * @h: head pointer
 * Return: number elements of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int i = 0;

	for (i = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
