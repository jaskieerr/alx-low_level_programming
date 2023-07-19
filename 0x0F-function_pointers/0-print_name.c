#include <stio.h>
#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: name to be printed
 * @f: function ptr
 * Return: nada
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
