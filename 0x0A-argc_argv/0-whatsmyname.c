#include <stdio.h>
/**
 *main - Print the name of the program.
 *@argc:Number of parameter for the main program, (in this case not used).
 *@argv:Parameters for main program.
 *Return:Always 0.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{
<<<<<<< HEAD
	putchar( argv[0]);
	return(0);
=======
	printf("%s\n", *argv);
	return (0);
>>>>>>> 0339dcd4ea4b1d1adc0c62e3560d6f8c5a4430de

}
