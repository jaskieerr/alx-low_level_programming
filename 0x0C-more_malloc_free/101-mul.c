#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNumber - checks if a string represents a valid positive number
 * @str: input string
 * Return: 1 if valid number, 0 otherwise
 */
int isNumber(const char *str)
{
	int i = 0;

	if (str == NULL || str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * print_result - prints the result of the multiplication
 * @result: array representing the result
 * @length: length of the result array
 */
void print_result(const int *result, int length)
{
	int i = 0;

	while (i < length && result[i] == 0)
		i++;

	if (i == length)
	{
		putchar('0');
		putchar('\n');
		return;
	}

	while (i < length)
	{
		putchar(result[i] + '0');
		i++;
	}

	putchar('\n');
}

/**
 * multiply - multiplies two positive numbers
 * @num1: first number as string
 * @num2: second number as string
 */
void multiply(const char *num1, const char *num2)
{
	int i, j, num1_len, num2_len;
	int *result;

	num1_len = strlen(num1);
	num2_len = strlen(num2);

	result = calloc(num1_len + num2_len, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* multiply each digit of num1 with num2 */
	for (i = num1_len - 1; i >= 0; i--)
	{
		for (j = num2_len - 1; j >= 0; j--)
		{
			/* multiply each digit and add to result */
			int mul = (num1[i] - '0') * (num2[j] - '0');

			/* add to previous result */
			int sum = result[i + j + 1] + mul;

			/* update result */
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	/* print result and free the allocated memory */
	print_result(result, num1_len + num2_len);
	free(result);
}

/**
 * main - entry point
 * Return: 0 on success, 1 on error
 */
int main(void)
{
	char num1[100];
	char num2[100];

	printf("Enter the first number: ");
	scanf("%s", num1);

	printf("Enter the second number: ");
	scanf("%s", num2);

	if (!isNumber(num1) || !isNumber(num2))
	{
		printf("Error: Invalid input\n");
		return (1);
	}

	multiply(num1, num2);

	return (0);
}
