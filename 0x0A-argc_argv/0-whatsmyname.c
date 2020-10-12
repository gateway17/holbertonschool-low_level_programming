#include <stdio.h>
/**
 *main - Print the name of the program.
 *@argc:Number of parameter for the main program, (in this case not used).
 *@argv:Parameters for main program.
 *Return:Always 0.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);

}
