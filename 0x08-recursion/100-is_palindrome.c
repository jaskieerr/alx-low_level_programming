#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: the string to be checked
 * Return: the length of de string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_checker - it checks if a string is a palindrome
 * @s: the string to be checked
 * @len: the length of the string
 * Return: 1 if str is palindrome and 0 if it's not
 */
int palindrome_checker(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	return (palindrome_checker(s + 1, len - 2));
}

/**
 * is_palindrome -  a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: the string to be checked
 * Return: read line 19
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (1);
	len = _strlen_recursion(s);
	return (palindrome_checker(s, len));
}
