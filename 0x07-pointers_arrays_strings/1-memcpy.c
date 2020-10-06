#include "holberton.h"
/**
 *_memcpy - Copy characters for one array and paste in other,
 *@dest:Is the array where are going to be paste the characters.
 *@src:Is the array from is going to be copied,
 *@n:Mount of characters that are going to be copied.
 *Return:The array dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ctr;

	for (ctr = 0; ctr < n; ctr++)
	{
		*(dest + ctr) = *(src + ctr);

	}
return (dest);
}
