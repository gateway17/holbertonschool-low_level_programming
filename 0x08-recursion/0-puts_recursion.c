#include "holberton.h"
/**
 *_puts_recursion - Print a string.
 *@s:The pointer where is going to start the string.
 */
void _puts_recursion(char *s)
{
	int ctr = 0;

	if (s[ctr] == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (s[ctr]);
	ctr++;
	_puts_recursion(s + ctr);

}
