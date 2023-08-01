#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *  loopin_fun - loops around linked list
 * @head: head ptr
 * Return: node loop count result
 */
size_t loopin_fun(const listint_t *head)
{
	const listint_t *slptr, *ptr;
	size_t length = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slptr = head->next;
	ptr = head->next->next;

	while (ptr != NULL)
	{
		if (slptr == ptr)
		{
			slptr = head;
			while (slptr != ptr)
			{
				length++;
				slptr = slptr->next;
				ptr = ptr->next;
			}

			slptr = slptr->next;
			while (slptr != ptr)
			{
				length++;
				slptr = slptr->next;
			}

			return (length);
		}

		slptr = slptr->next;
		ptr = ptr->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: head double ptr
 * Return: size of free list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t length, i;

	length = looping_fun(*h);

	if (length == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
		}
		*h = NULL;
	}

	h = NULL;

	return (i);
}
