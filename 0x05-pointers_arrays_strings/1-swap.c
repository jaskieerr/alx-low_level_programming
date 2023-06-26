#include "main.h"

/**
 * swap_int - It swaps the value of two integers
 * @a: pointes to int value
 * @b: pointes to the other int value
 */
void swap_int(int *a, int *b)
{
	int ra = *a;
	*a = *b;
	*b = ra;
}
