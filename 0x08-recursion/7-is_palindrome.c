#include "holberton.h"
/**
 * is_palindrome - calls others functions.
 * @s: String.
 *Return: "1" if string is palindrome, else "0"
 */
int is_palindrome(char *s)
{
	int size;

	size = _strlen(s) - 1;

	return (function(0, s, size));

}
/**
 * function - Compare characters (the first with the last, on and on).
 * @ctr: Iterator.
 * @s: String.
 * @size: Size of the string gotten by _strlen.
 * Return: "1" if it is palindrome,else "0".
 */
int function(int ctr, char *s, int size)
{
	if (ctr >= size)
	{
		return (1);
	}
	else if (s[ctr] != s[size])
	{
		return (0);
	}
	return (function(ctr + 1, s, size - 1));
}
/**
 * _strlen - counts mount of characters.
 * @s: String to count.
 * Return: Mount of characters.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
