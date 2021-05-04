#include "holberton.h"
/**
 *_isupper - find uppercase.
 *print "1" if your character match with uppercase return 1.
 *@c: character that you need to know if is UPPER.
 *Return: "1" if match, else "0".
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

