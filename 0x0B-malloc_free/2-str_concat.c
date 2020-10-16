#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings.
 *@s1: First string.
 *@s2: Second string.
 *Return: The pointer of the new string.
 */
char *str_concat(char *s1, char *s2)
{

	int ctr1, ctr2, c;
	char *p = NULL;

	if (s1 == NULL)	
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (ctr1 = 0; *(s1 + ctr1) != '\0'; ctr1++)
		;
	for (ctr2 = 0; *(s2 + ctr2) != '\0'; ctr2++)
		;
	c = ctr1 + ctr2;

	p = malloc(sizeof(char) * (c + 1));

	ctr1 = 0;
	for (; s1[ctr1] != '\0'; ctr1++)
	{
		p[ctr1] = s1[ctr1];
	}
	ctr2 = 0;
	for (; s2[ctr2] != '\0'; ctr1++, ctr2++)
	{
		p[ctr1] = s2[ctr2];
	}
	*(p + ctr1) = '\0';
	return (p);
}
