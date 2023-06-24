#include "main.h"
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
