#include "holberton.h"
/**
 *_strcmp - compares two strings.
 *@s1:First string.
 *@s2:Second string.
 *Return:if s1 is longer (15), if s1 is shorter (-15),both equal in length (0)
 */
int _strcmp(char *s1, char *s2)
{

	int ctr1 = 0;
	int ctr2 = 0;

	while (s1[ctr1] != '\0')
	{
		ctr1++;
	}

	while (s2[ctr2] != '\0')
	{
		ctr2++;
	}

	if (ctr1 > ctr2)
	{
		return (15);
	}
	else if (ctr1 < ctr2)
	{
		return (-15);
	}
	else if (ctr1 == ctr2)
	{
		return (0);
	}
}
