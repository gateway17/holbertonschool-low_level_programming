#include "holberton.h"
/**
 *_puts - print a string if characters.
 *@str: String to print.
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar (str[counter]);
		counter++;
	}
	_putchar ('\n');


}
