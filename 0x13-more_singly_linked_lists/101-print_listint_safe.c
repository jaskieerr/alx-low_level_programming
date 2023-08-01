#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_loop_len - calculates the length of a loop in a linked list
 * @head: head ptr as usual
 * Return: iteration count
 */
size_t find_loop_len(const listint_t *head)
{
	const listint_t *st_ptr, *ptr_sari3;
	size_t length = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	st_ptr = head->next;
	ptr_sari3 = head->next->next;

	while (ptr_sari3 != NULL)
	{
		if (st_ptr == ptr_sari3)
		{
			st_ptr = head;
			while (st_ptr != ptr_sari3)
			{
				length++;
				st_ptr = st_ptr->next;
				ptr_sari3 = ptr_sari3->next;
			}

			st_ptr = st_ptr->next;
			while (st_ptr != ptr_sari3)
			{
				length++;
				st_ptr = st_ptr->next;
			}

			return (length);
		}

		st_ptr = st_ptr->next;
		ptr_sari3 = ptr_sari3->next->next;
	}

	return (0);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: listint_t list head ptr
 * Return: nodes count
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t length, i;

	length = find_loop_len(head);

	if (!length)
	{
		for (; head != NULL; length++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
	}
	else
	{
		for (i = 0; i < length; i++, head = head->next)
			printf("[%p] %d\n", (void *) head, head->n);
		printf("-> [%p] %d\n", (void *) head, head->n);
	}

	return (length);
}
