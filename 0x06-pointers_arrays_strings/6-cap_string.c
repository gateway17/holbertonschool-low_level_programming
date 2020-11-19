#include <stdio.h>

char *cap_string(char *s)
{
	int ctr;


	for(ctr = 0; s[ctr] != '\0'; ctr++)
	{
	if (s[ctr - 1] == 32)
	{
		if (s[ctr] < 91 && s[ctr] > 64)
		{
			s[ctr] = (s[ctr] - 32);

		}

	}
	}
return(s);
}

int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *p;

    p = cap_string(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
