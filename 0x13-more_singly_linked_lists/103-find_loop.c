#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: head ptr
 * Return: adress where node with loop strt
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slptr = head, ptr = head;

	while (ptr != NULL)
	{
		slptr = slptr->next;
		ptr = ptr->next->next;
		if (slptr == ptr)
		{
			slptr = head;
			while (slptr != ptr)
			{
				slptr = slptr->next;
				ptr = ptr->next;
			}
			return (slptr);
		}
	}
	return (NULL);
}
