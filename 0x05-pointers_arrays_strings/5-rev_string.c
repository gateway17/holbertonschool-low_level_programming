#include "holberton.h"
/**
 *rev_string - print a string, and then in reverse.
 *@s: the string to print.
 */
void rev_string(char *s)
{
	int counter, ctr;

	counter = 0;
	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
		counter++;
		_putchar(s[ctr]);

	}
	_putchar ('\n');
	while (&s[counter] != &s[0])
	{
	_putchar (s[counter]);
	--counter;
	}
	_putchar (s[0]);
	_putchar ('\n');

}
