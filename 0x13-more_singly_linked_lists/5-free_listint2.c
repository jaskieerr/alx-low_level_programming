#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head ptr
 * Return: nada
 */
void free_listint2(listint_t **head)
{
	listint_t *frr;

	if (head == NULL)
		return;
	while (*head)
	{
		frr = *head;
		*head = (*head)->next;
		free(frr);
	}
	*head = NULL;
}
