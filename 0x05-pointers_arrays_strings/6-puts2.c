#include "holberton.h"
/**
 *puts2 - prints every other character of a string.
 *@str: the string.
 */
void puts2(char *str)
{
	int ch;

	for (ch = 0; str[ch] != 0; ch = ch + 2)
	{
		if (str[ch] - 1 == 0)
		{
			ch--;
			continue;
		}
		_putchar (str[ch]);

	}
	_putchar(10);
}
