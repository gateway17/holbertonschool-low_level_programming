#include"holberton.h"

int main(void)
{
	char c[] ="Holberton";
	int counter;
	for (counter = 0; c[counter] != 00; counter++)
	{
		_putchar(c[counter]);
	}
_putchar('\n');
return(0);
}
