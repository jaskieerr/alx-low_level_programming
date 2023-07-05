#include "main.h"

/**
 * another_tmpf - the divisor that check if be is divisible by
 * itself or by numba other than 0
 * @a:the same this stated above
 * @b:numba beingh checked
 * Return: kinda depends
 */

int another_tmpf(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (another_tmpf(a + 1, b));
}

/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: numba to be checked
 * Return:int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (another_tmpf(2, n));
}
