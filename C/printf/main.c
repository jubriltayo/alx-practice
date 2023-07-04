#include <stdio.h>
#include "main.h"

int main(void)
{
    int r_val = 0;
    int r_val2 = 0;
    int test = 7843420;

    printf("-----Output using printf-----\n");
    r_val = printf("%i\n", test);
    printf("%d\n", r_val);

    printf("-------------------------\n");

    printf("-----Output using _printf-----\n");
    r_val2 = _printf("%d\n", test);
    printf("%d\n", r_val2);
}