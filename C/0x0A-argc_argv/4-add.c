#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char **argv)
{
    int i, j, sum = 0;

    if (argc == 1)
        printf("0\n");
    else
    {
        for (i = 1; argv[i]; i++)
        {
            for (j = 0; argv[i][j]; j++)
            {
                if (!(isdigit(argv[i][j])))
                {
                    printf("Error\n");
                    return 1;
                }
            }

            sum += atoi(argv[i]);
        }
        printf("%d\n", sum);
    }
    return 0;
}