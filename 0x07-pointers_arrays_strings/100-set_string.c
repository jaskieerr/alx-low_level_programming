#include "main.h"

/**
 * set_string - seting a value of a pointer to char
 * @s: the pointer to a pointer
 * @to: pointer to char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
