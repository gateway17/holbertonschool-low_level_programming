#include "holberton.h"
/**
 *main - Print each parameters.
 *@argc:counts the mount of parameters.
 *@argv:Parameters
 *Return:Always 0.
 */
int main(int argc, char *argv[])
{
	int ctr;

	for (ctr = 0; ctr < argc; ctr++)
	{
	printf("%s\n", argv[ctr]);
	}
	return (0);

}
