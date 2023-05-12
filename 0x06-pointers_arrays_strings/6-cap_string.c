#include "main.h"

char *cap_string(char *s)
{
    int i = 0, j;
    char separator[] = " \t\n,;.!?\"(){}";

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (i == 0)
                s[i] = s[i] - 32;
            else
            {
                for (j = 0; separator[j] != '\0'; j++)
                {
                    if (separator[j] == s[i - 1])
                        s[i] = s[i] - 32;
                }
            }
        }
        i++;
    }
    return s;
}