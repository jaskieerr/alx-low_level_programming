#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: node ptr
 * Return: sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int resultt;

	for (resultt = 0; head; head = head->next)
		resultt += head->n;

	return (resultt);
}
