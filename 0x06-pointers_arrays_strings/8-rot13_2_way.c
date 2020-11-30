#include "holberton.h"


char *rot13(char *s)
{
    int ctr, num, rslt, st, sm;

    for (ctr = 0; s[ctr] != '\0';ctr++)
    {
        num = s[ctr];
        rslt = num + 13;
        if (num > 97 && num < 122 && rslt > 122)
        {
            st = rslt - 122;
            sm = st + 96;
            s[ctr] = sm;
        }
        else if (num > 64 && num < 91 && rslt > 90)
        {
            st = rslt - 90;
            sm = st + 64;
            s[ctr] = sm;
        }
    }
    return(s);

}




int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
/**    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s); */
    return (0);
}