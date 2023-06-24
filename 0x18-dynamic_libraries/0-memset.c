#include "main.h"
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
