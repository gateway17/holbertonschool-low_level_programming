#include <stdio.h>
/**
  * main - print with out puts or printf
  * @void: no parameter expected.
  * print the numbers from "00" to "99"
  * Return: returns 0.
  */
int main(void)
{
	int c;
	int x;

	for (c = '0'; c <= '9'; c++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			putchar(c);
			putchar(x);

			if (x != '9' ||  c != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
