#include <stdio.h>
#include <stdlib.h>
/**
 *main - make a multiplication with the parameters after the main program.
 *@argc: NO USED,
 *@argv: integers to multiply.
 *Return: "0" if there are more than 2 parameters (after de main program)
 *	"1" if not.
 */
int main(int __attribute__((__unused__)) argc, char **argv)
{

	if (argc > 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
