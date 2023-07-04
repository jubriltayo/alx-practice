#include "main.h"

char *leet(char *s)
{
    int i = 0, j;
    char l[] = "aAeEoOtTlL";
    char n[] = "4433007711";

    while (s[i] != '\0')
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == l[j])
                s[i] = n[j];
        }
        i++;
    }
    return s;
}