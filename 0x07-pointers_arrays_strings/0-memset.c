#include "holberton.h"
#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	int ctr;

	for (ctr = 0;ctr < n;ctr++)
	{
		s[ctr] = b;
	putchar(s[ctr]);
	}
}
int main(void)
{
	    char buffer[98] = {0x00};

	_memset(buffer, 0x2, 95);
	printf("-------------------------------------------------\n");   
	return (0);
}
