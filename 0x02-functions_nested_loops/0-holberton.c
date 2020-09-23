#include"holberton.h"
/**
 *main - Print "holberton"
 *Print "holberton" bringing the function "_putchar" fron "holberton.h"
 *Return: return 0 when program finish.
 */
int main(void)
{
	char c[] = "Holberton";

	int counter;

	for (counter = 0; c[counter] != 00; counter++)
	{
		_putchar (c[counter]);
	}
_putchar ('\n');
return (0);
}
