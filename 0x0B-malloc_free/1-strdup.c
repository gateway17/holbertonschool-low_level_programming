#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Copy a string.
 *@str: String to copy.
 *Return: The pointer of the new string.
 */
char *_strdup(char *str)
{

	int ctr = 0;
	int ctr2 = 0;
	char *p;

	if (str == NULL)
	{
		return(NULL);
	}


	while (*(str + ctr) != '\0')
	{
		ctr++;
	}
	p = malloc(sizeof(char) * (ctr + 1));
	if (p == NULL)
	{
		return (NULL);
	}

	while (ctr2 < ctr)
	{
		p[ctr2] = *(str + ctr2);
		ctr2++;

	}
	*(p + ctr2) = '\0';
	return (p);
}
