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

	char buffer[90];
	char n = 'a';

	_memset(buffer, a, 20);

return(0);
}
