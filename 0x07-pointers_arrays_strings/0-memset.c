#include "holberton.h"
/**
 *_memset - print characters n number of times.
 *@s:array (start point).
 *@b:Character to print.
 *@n:Number of times to print @b
 *Return:The pointer of array.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int ctr;
	char *m;

	for (ctr = 0; ctr < n; ctr++)
	{
		s[ctr] = b;
		_putchar(s[ctr]);
	}
	m = s;
return (m);
}
