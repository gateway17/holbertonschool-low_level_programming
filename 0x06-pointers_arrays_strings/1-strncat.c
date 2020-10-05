#include "holberton.h"
/**
 *_strncat - cancatenates two strings with a byte delimiter.
 *@dest: first string.
 *@src: Second string.
 *@n:byte delimiter.
 *Return:The pointer of dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int ctr, var2, var3;

	ctr = 0;
	var3 = 'a';

	while (dest[ctr] != '\0')
	{
		_putchar(dest[ctr]);
		ctr++;

	}
		for (var2 = 0; var2 <= n; var2++)
		{
			var3 = dest[ctr + var2] = src[var2];
		}
		_putchar('\n');
return (dest);
}
