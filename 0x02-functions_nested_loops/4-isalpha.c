#include"holberton.h"
/**
 *_isalpha - find lowcase.
 *print "1" if your character match with alphabet.
 *@c: character that you enter.
 *Return: "1" if match, else "0".
 */
int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else if (c == 'A' && c <= 'Z')
	{
		return (1);
	}
return (0);
}
