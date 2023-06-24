#include <stdio.h>
#include "main.h"

/**
* _islower  - prints if the characters are lowercase or not
* 0 for not lowercase, 1 for lowercase
* @c: the letter being tested for case
* Return: 0 if not lowercase, 1 if lowercase
*/
int _islower(int c)
{
	if ('a' <= c && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
* _puts - prints a string followed by a new line
* @str: the string being printed
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: The ASCII difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * _strspn - finds the length of a prefix substring
 * @s: the string
 * @accept: the characters that are being matched
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *o = accept;
	int len = 0, i, k;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (len != i)
			break;
		for (k = 0; o[k] != '\0'; k++)
		{
			if (p[i] == o[k])
				len++;
		}
	}
	return (len);
}
