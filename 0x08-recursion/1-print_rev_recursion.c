#include <stdio.h>
/**
 *_print_rev_recursion - Print in reverse a string
 *@s:String to print.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}

}
