#include<stdio.h>
/**
 * main - Base 16
 * print Base 16 caracters.
 * Return: return 0 if code exit successfully
 */
int main(void)
{
	char cr, nm;

	cr = 'a';
	nm = '0';
	while (nm <= '9')
	{
		putchar(nm);
		 nm++;
	}
	while (cr <= 'f')
	{
	putchar (cr);
	cr++;
	}
	putchar ('\n');
	return (0);
}

