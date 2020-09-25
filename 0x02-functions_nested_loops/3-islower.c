#include"holberton.h"

int _islower(int c)
{
	char tc;

	for (tc = 'a'; tc <= 'z'; tc++)
	if (tc == c)
	{
		return(1);
	}
return(0);
}
