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
	unsigned int ctr;

	for (ctr = 0; ctr < n; ctr++)
	{
		*(s + ctr) = b;
	}
<<<<<<< HEAD
}
int main(void)
{
	    char buffer[98] = {0x00};

	_memset(buffer, 0x2, 95);
	printf("-------------------------------------------------\n");   
	return (0);
=======
return (s);
>>>>>>> 2bc0f0ea10ac18739eed9382528f59338d8ee8aa
}
