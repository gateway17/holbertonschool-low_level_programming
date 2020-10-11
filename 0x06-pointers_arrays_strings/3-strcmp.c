#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1:First string.
 *@s2:Second string.
 *Return:if s1 is longer (15), if s1 is shorter (-15),both equal in length (0)
 */
int _strcmp(char *s1, char *s2)
{

	int ctr1;
	int r = 0;

	for (ctr1 = 0; s1[ctr1] != 0; ctr1++)
	{
		if (s1[ctr1] != s2[ctr1])
		{
			r = s1[ctr1] - s2[ctr1];
			return (r);
		}
	}

	return (r);
}
