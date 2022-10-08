#include "main.h"

void rev_string(char *s)
{
	int l, i;
	char ch;
	
	for(l = 0; s[l] != '\0'; l++)
		
	for(i = 0; i < l / 2; i++)
	{
		ch = s[l];
		s[l] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}
}

OR

void rev_string(char *s)
{
    char *rev;
    char tmp;

    rev = s;

    while (*(rev + 1) != '\0')
    {
        rev = rev + 1;
    }
    while (s < rev)
    {
        tmp = *s;
        *s = *rev;
        *rev = tmp;

        s++;
        rev--;
    }
}
