#include "lists.h"


/**
 * add_dnodeint - adds a new node at the beginning
 * of the list
 * @head: the list head pointer
 * @n: element value
 * Return: new element value
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->next = *head;
	new_node->n = n;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
