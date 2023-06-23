#include "holberton.h"
/**
 * *_strcpy - copies the string pointed to by source including the terminating
 * null byte \0, to the buffer pointed to by destination.
 * @destination: the buffer
 * @source: string being copied
 * Return: destination
 */
char *_strcpy(char *destination, char *source)
{
	char *cpyresult = destination;

	if ((*destination != '\0') && (*source != '\0'))
	{
		while (*source != '\0')
		{
			*destination++ = *source++;
		}
		*destination = '\0';
	}
	return (cpyresult);
}
