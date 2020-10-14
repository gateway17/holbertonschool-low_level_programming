#include <stdio.h>

char *create_array(unsigned int size, char c)
{
	char array[size];
	char *ptr;

	if (size == 0)
	{
		return(NULL);

	}
	array[0] = c;
	ptr = array;
	return(ptr);




}
