#include "main.h"

void puts_half(char *str)
{
  int l, n;
  
	for (l = 0; str[l] != '\0'; l++)
  
	if(l % 2 == 0)
	{
    		for (n = l / 2; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
    	else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
	
}

OR

void puts_half(char *str)
{
    int i, half;
    while (str[i] != '\0')
        i++;

    half = i / 2;

    for (i = half, str[i]; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

}
