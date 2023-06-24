#include "main.h"
/**
* *_strcat - concatenates 2 strings
* @to: the target string
* @from: what is being added
* Return: returns the destination string
*/
char *_strcat(char *to, char *from)
{
	int x = 0, y = 0;

	
	while (to[x] != '\0')
		++x;
	while ((to[x + y] = from[y]) != '\0')
		++y;
	to[x + y] = '\0';
	return (to);
}
