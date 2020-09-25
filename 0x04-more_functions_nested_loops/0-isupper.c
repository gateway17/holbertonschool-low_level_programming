#include"holberton.h"
/**
 *_islower - find lowcase.
 *print "1" if your character match with lowcase alphabet.
 *@c: character that you need to know if is lowcase or UPPER.
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

