#include "main.h"

/**
 * _isdigit - returns if the character is a digit or not
 * @c: the character being tested
 * Return: 1 for a digit, 0 for not a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _memcpy - copies from the source to the destination
 * @destination: the destination
 * @source: the source
 * @n: the amount to be copied
 * Return: the altered destination
 */
char *_memcpy(char *destination, char *source, unsigned int n)
{
	char *p = destination;

	while (n--)
	{
		*p++ = *source++;
	}
	return (destination);
}

/**
* *_strncat - concatenates 2 strings
* @destination: the target string
* @source: what is being added
* @n: how much of source is being added to destination
* Return: returns the destination
*/
char *_strncat(char *destination, char *source, int n)
{
	int x, y;

	for (x = 0; destination[x] != '\0'; x++)
		;
	for (y = 0; source[y] != '\0' && y < n; y++)
	{
		destination[x + y] = source[y];
	}
	destination[x + y] = '\0';
	return (destination);
}
