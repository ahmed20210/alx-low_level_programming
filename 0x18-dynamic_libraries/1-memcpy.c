#include "main.h"
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
