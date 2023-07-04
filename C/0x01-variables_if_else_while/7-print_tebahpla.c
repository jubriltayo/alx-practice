#include <stdio.h>

int main()
{
    char i;
    
    for (i = 'z'; i >= 'a'; i--)
    {
        putchar(i);
    }
    putchar('\n');
    
    return 0;
}