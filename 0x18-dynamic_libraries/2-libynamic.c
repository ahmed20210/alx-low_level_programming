#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: NULL if not found, otherwise s after the character is located
 */
char *_strchr(char *s, char c)
{
	char *p = s;

	for (; *p != '\0'; p++)
	{
		if (*p == c)
			return (p);
	}
	if (*p == c)
		return (p);
	return (0);
}

/**
 * _strlen_recursion - counts the length of a string
 * @s: the string
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: always length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

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
