#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - copy n bytes of a string
 *
 * @dest: The addres of the copy
 * @src: The address of the original
 * @n: number of bytes to be copied
 *
 * Return: The address of the concatenated char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, lenghtOriginal, aux;

	for (lenghtOriginal = 0; *(src + lenghtOriginal); lenghtOriginal++)
		;

	if (lenghtOriginal >= n)
	{
		for (i = 0; i < n; i++)
			*(dest + i) = *(src + i);
	}
	else
	{
		for (i = 0; i < lenghtOriginal; i++)
			*(dest + i) = *(src + i);

		aux = i;

		for (i = aux; i < n; i++)
			*(dest + i) = 0;

	}
	return (dest);
}
