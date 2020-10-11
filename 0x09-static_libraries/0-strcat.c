#include "holberton.h"
/**
 *_strcat - concatenates two strings.
 *@dest: First string.
 *@src: Second string.
 *Return: the string concatenated.
 */
char *_strcat(char *dest, char *src)
{

	int i = 0;
	int a;
/** Conts the characters of the firt string.*/
	while (dest[i] != '\0')
	{
		i++;
	}

/* start the concatenation. */

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}

	return (dest);
}

