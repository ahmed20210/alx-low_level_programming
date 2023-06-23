#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @l: The character will be printed
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char l)
{
		return (write(1, &l, 1));
}
