#include"holberton.h"
/**
 *_isupper - find uppercase.
 *print "1" if your character match with uppercase return 1.
 *@c: character that you need to know if is UPPER.
 *Return: "1" if match, else "0".
 */
int _isupper(int c)
{
	char tc;

	for (tc = 'A'; tc <= 'Z'; tc++)
	if (tc == c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
return (0);
}

