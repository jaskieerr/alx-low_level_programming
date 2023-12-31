#include <stdio.h>
#include "lists.h"

/**
 * print_list -  a function that prints all the elements
 * of a list_t list
 * @h: ptr to the head of the list
 * Return: numbea of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
