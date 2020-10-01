#include "holberton.h"
/**
 *print_rev - print a string in reverse.
 *@s: the string to print in reverse.
 */
void print_rev(char *s)
{
	int i, lenght;

	i = 0;

	while (s[i] != 0)
		i++;

	lenght = i - 1;

	for (i = 0; i <= lenght; i++)
		_putchar(s[lenght - i]);

	_putchar(10);
}
