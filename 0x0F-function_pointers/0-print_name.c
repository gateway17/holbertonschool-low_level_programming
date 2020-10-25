#include <stdio.h>
/**
 * print_name - calls other function.
 * @name: name of the person
 * @f: pionter to the name.
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
