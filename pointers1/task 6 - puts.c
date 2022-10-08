#include "main.h"

/* "012345678" => "02468" */

void puts2(char *str)
{
  int i;
  for(i = 0; str[i] != '\0'; i++)
  { 
    if (i % 2 == 0)
      _putchar(str[i]);
  }
  _putchar('\n');
}

OR

void puts2(char *str)
{

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] % 2 == 0)
            _putchar(str[i]);

        i++;
    }
}
