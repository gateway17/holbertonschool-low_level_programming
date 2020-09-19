#include <stdio.h>
/**
  * main - print type sizes
  *
  * Return: prints the size of various types for the specific machine (Success)
  */

int main(void)
{
	char c;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	return (0);
}
