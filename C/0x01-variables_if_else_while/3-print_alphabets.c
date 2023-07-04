#include <stdio.h>

int main()
{
    char i = 'a';
    
    while (i <= 'z')
    {
        putchar(i);
        i++;
    }
    for (i = 'A'; i <= 'Z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
    
    return 0;
}