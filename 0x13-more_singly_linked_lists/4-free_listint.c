#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint -  a function that frees a listint_t list.
 * @head: head ptr
 * Return: jackshit
 */
void free_listint(listint_t *head)
{
	listint_t *tahrir;

	while (head)
	{
		tahrir = head;
		head = head->next;
		free(tahrir);
	}
}
