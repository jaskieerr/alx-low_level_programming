#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len -  a function that returns the numbea
 * of elements in a linked listint_t list.
 * @h: head ptr
 * Return: elements count
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
