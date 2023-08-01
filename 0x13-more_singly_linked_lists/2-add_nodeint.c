#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: head ptr
 * @n: int to be added to new node
 * Return: address of the new element, NULL if fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *jadid;

	jadid = malloc(sizeof(listint_t));
	if (jadid == NULL)
		return (NULL);
	jadid->n = n;
	jadid->next = *head;
	*head = jadid;
	return (jadid);
}
