#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>

#define PASSWORD_LENGTH 100
#define CHECKSUM 2772



/**
* generatePassword - It generate a random password an place it
* inside an allocated variable named password
* @_sum: pointes to  variable that keep tracks  of genretad passwords
* ascii value sum.
* Return: allocated char* password
*/
char *generatePassword(int *_sum) 
{
	const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *password = malloc(PASSWORD_LENGTH + 1);
	int i;

	srand(time(NULL));
	for (i = 0; *_sum < CHECKSUM - (127); ++i) {
		password[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
		*_sum += (int) password[i];
	}
	password[i] = '\0';
	return password;
}

/**
 * main - entry point
 * Description:Ir generetes a valid key for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char *password = generatePassword(&sum);

	char *difference = malloc(2);
	difference[0] = CHECKSUM - sum;
	difference[1] = '\0';
	strcat(password, difference);

	printf("%s", password);

	free(password);
	free(difference);
	return (0);
}
