#include <stdio.h>
#include "../main.h"

/* %s test */

int main(void)
{
    int r_val = 0;
    int r_val2 = 0;
    char *test = "23gh?-#\n";

    printf("-----Output using printf-----\n");
    r_val = printf("%s", test);
    printf("%d\n", r_val);

    printf("-------------------------\n");

    printf("-----Output using _printf-----\n");
    r_val2 = _printf("%s", test);
    printf("%d\n", r_val2);
}
