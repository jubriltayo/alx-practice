#include "main.h"

void print_rev(char *s)
{
	int n;
	
	for(n = 0; s[n] != '\0'; n++)
		
	for(--n; n >= 0; --n)
		_putchar(s[n]);
	
	_putchar('\n');
}

OR

void print_rev(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        s[i];
        i++;
    }

    while (i > 0)
    {
        --i;
        _putchar(s[i]);
    }
}
