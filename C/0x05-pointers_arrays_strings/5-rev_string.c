#include "main.h"

void rev_string(char *s)
{
    int len = 0, i;
    char temp;
    for (; s[len] != '\0'; len++)
        ;
    for (i = 0; i < len / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}