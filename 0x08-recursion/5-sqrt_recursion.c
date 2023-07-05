#include "main.h"
/**
 * tempf - checks for the square root
 * @a: check possible square root
 * @b: numba that its square root to be determined
 * Return: kinda depends
 */

int tempf(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (tempf(a + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: numba to find its square root
 * Return: -1 in case no natural square roots
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (tempf(1, n));
}
