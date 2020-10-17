#include "holberton.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@s: The string.
 *Return:The pointer.
 */
char *string_toupper(char *s)
{

	int ctr = 0;


	while (s[ctr] != '\0')
	{
	if (s[ctr] > 96 && s[ctr] < 123)
	{
	*(s + ctr) = s[ctr] - 32;
	}
		ctr++;
	}
	return (s);

}
