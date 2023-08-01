#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index -a function that inserts a new
 * node at a given position.
 * @head: head ptr
 * @idx: indexing new node adress
 * @n: new node values
 * Return: new node ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tempu, *jadid;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tempu = *head;
		for (i = 0; i < idx - 1 && tempu != NULL; i++)
		{
			tempu = tempu->next;
		}
		if (tempu == NULL)
			return (NULL);
	}
	jadid = malloc(sizeof(listint_t));
	if (jadid == NULL)
		return (NULL);
	jadid->n = n;
	if (idx == 0)
	{
		jadid->next = *head;
		*head = jadid;
		return (jadid);
	}
	jadid->next = tempu->next;
	tempu->next = jadid;
	return (jadid);
}
