#include "holberton.h"
/**
 *_strlen - countes characters
 *@s: The string to count.
 *Return: the mount of characters that "s" has.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\0')
	{
		counter = counter + 1;
	}
return (counter);
}

