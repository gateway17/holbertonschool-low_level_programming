#include "holberton.h"

char *argstostr(int ac, char **av)
{
    int ctr, ctr2, total, ctr3, ctr4;
    char *pointer;

    if (ac == 0 || av == NULL)
        return (NULL);


    for (ctr = 0; ctr < ac; ctr++)
    {
        for (ctr2 = 0;av[ctr][ctr2] != '\0'; ctr2++)
                ;
        total+= ctr2 + 1;
    }
    pointer = malloc(sizeof(char) * total);

    for (ctr3 = 0; av[ctr3] != NULL; ctr3++)
        for (ctr4 = 0; av[ctr3][ctr4] != '\0';ctr4++)
        {
            //pendiente hacer esta parte.
        }

    return (pointer);
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
//    free(s);
    return (0);
}