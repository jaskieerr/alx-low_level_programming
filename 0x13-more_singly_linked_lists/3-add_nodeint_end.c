#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: head ptr
 * @n: int to be added to new linked list
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jadid, *last;

	jadid = malloc(sizeof(listint_t));
	if (jadid == NULL)
		return (NULL);
	jadid->n = n;
	jadid->next = NULL;
	if (*head == NULL)
	{
		*head = jadid;
		return (jadid);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = jadid;
	return (jadid);
}
