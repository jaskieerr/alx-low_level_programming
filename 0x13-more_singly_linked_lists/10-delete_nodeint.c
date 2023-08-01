#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list
 * @head: double ptrs to head of list
 * @index: index of the node to be killed
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tempo, *nexxt;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nexxt = (*head)->nexxt;
		free(*head);
		*head = nexxt;
		return (1);
	}
	tempo = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (tempo->nexxt == NULL)
			return (-1);
		tempo = tempo->nexxt;
	}
	nexxt = tempo->nexxt;
	tempo->nexxt = nexxt->nexxt;
	free(nexxt);
	return (1);
}
