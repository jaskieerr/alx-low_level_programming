#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: head pointer
 *
 * Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
