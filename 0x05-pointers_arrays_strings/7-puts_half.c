#include "holberton.h"
/**
 *puts_half - print the second half of a string.
 *@str:String.
 */
void puts_half(char *str)
{
	int ch = 1;
	int mtl;

	while (str[ch] != '\0')
	{
		ch++;
	}
	ch = ch - 1;
	mtl = ch / 2;
	if (ch % 2 == 1)
	{
	mtl = mtl + 1;
	}
	while (mtl <= ch)
	{
		_putchar(str[mtl]);
		mtl++;
	}
	_putchar ('\n');
}
