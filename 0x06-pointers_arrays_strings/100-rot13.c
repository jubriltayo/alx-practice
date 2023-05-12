#include "main.h"

char *rot13(char *s)
{
    int i = 0, j;
    char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (s[i] != '\0')
    {
        for (j = 0; j < 52; j++)
            if (a[j] == s[i])
            {
                s[i] = b[j];
                break;
            }
        i++;
    }
    return s;
}