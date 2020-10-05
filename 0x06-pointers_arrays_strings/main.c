#include "holberton.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{

	int i = 0;
	int a;
/** Contamos los caracteres del primer string */
	while (dest[i] != '\0')
	{
		i++;
	}

/* termina el conteo. */

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}

	return (dest);


}

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *p;
	p = _strcat(s1, s2);
	printf ("%s", p);
	return (0);
}
