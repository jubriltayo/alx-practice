#include "../main.h"

/* _putchar test*/

int main(void)
{
    int i;
    char *name = "Jubril";
    for (i = 0; name[i]; i++)
    {
        _putchar(name[i]);
    }
    _putchar('\n');
    return (i);
}