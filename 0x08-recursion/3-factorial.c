#include "main.h"
/**
 * factorial - a function that returns
 *  the factorial of a given integer
 * @n: the numba to be factored
 * Return: kinda depends
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
