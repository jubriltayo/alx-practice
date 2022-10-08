#include "main"

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str + 0);
		str++;
	
	_putchar('\n');
}

OR

void _puts(char *str)
{
    int i;

    while (str[i] != '\0')
    {
        str[i];
        i++;
    }
    print("%d", i);
}
