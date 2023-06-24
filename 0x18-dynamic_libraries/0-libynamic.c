#include "main.h"

/**
 * _isupper - prints if the characters are lowercase or not
 * 0 for lowercase 1 for uppercase
 * @l: the character to be checked
 * Return: 0 for lowercase, 1 for uppercase
 */
int _isupper(int l)
{
	if ('A' <= l && l <= 'Z')
		return 1;
	else
		return 0;
}

/**
 * _memset - fills memory with a constant byte
 * @area: the area being looked at
 * @byt: the byte filling memory
 * @m: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *area, char byt, unsigned int m)
{
	char *c = area;

	while (m--)
	{
		*c++ = byt;
	}
	return (area);
}

/**
* *_strcat - concatenates 2 strings
* @destination: the target string
* @source: what is being added
* Return: returns the destination string
*/
char *_strcat(char *destination, char *source)
{
	int x = 0, y = 0;

	
	while (destination[x] != '\0')
		++x;
	while ((destination[x + y] = source[y]) != '\0')
		++y;
	destination[x + y] = '\0';
	return (destination);
}
