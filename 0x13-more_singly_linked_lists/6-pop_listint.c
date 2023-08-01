#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of listint_t linked list and returns the head
 * node’s data (n)
 * @head: head ptr
 * Return: head node or0 if MT
 */
int pop_listint(listint_t **head)
{
	listint_t *frr;
	int n;

	if (*head == NULL)
		return (0);
	frr = *head;
	n = frr->n;
	*head = (*head)->next;
	free(frr);
	return (n);
}
