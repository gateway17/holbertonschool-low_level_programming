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
	int a = 0;
	int x = 0;
	int t;

	while (dest[a] != '\0')
		a++;
	while (dest[x] != '\0')
		x++;

	if (n > x)
		n = x;

	for (t = 0; t < n; t++)
	{
		dest[a + t] = src[t];
	}

	return (dest);
}
