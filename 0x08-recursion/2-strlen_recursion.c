#include "holberton.h"
/**
 *_strlen_recursion - returns the length of a string.
 *@s:String to count.
 *Return:The lenght of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
