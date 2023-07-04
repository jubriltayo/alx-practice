#include <stdio.h>
#include "../main.h"

/* %c test and its return value*/

int main(void)
{
    int r_val = 0;
    int r_val2 = 0;
    char test = 'd';

    printf("-----Output using printf-----\n");
    r_val = printf("%c\n", test);
    printf("%d\n", r_val);

    printf("-------------------------\n");

    printf("-----Output using _printf-----\n");
    r_val2 = _printf("%c\n", test);
    printf("%d\n", r_val2);
}
