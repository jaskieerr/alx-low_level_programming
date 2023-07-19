include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adding ints
 * @a: first int
 * @b: second int
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracting two ints
 * @a: first int
 * @b: second int
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipling tow ints
 * @a: first int
 * @b: second int
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: a/b
 */
int op_div(int a, int b)
{
	/* todo: handle division by 0 */
	return (a / b);
}

/**
 * op_mod - calculates modules
 * @a: first int
 * @b: second int
 * Return: 
 */
int op_mod(int a, int b)
{
	return (a % b);
}
