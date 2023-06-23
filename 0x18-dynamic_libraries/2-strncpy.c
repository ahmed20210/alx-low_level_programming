#include "holberton.h"
/**
* *_strncpy - copies the source to destination
* @destination: the destinationination
* @source: the source being copied
* @n: the amount of info to copy
* Return: Always destination
*/
char *_strncpy(char *destination, char *source, int n)
{
	int i;

	for (i = 0; i < n && source[i] != '\0'; i++)
		destination[i] = source[i];
	for (; i < n; i++)
		destination[i] = '\0';
	return (destination);
}
