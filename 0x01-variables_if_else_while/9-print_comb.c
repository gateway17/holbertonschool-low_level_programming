#include<stdio.h>
/**
 * main - single-digit numbers.
 * print all simgle-digits possible.
 * Return: return 0 when program finish.
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num = num + 1)
	{
		putchar (num);
		putchar (',');
		putchar (' ');
	}
	putchar ('\n');
	return (0);
}
