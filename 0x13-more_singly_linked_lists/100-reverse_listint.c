#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: double ptr to headof linked list
 * Return: reversed list's head ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *precursor, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	precursor = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = precursor;
		precursor = *head;
		*head = next;
	}
	*head = precursor;

	return (*head);
}
