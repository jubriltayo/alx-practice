#include <stdio.h>

void main()
{
    int i, j, space, size;
    printf("Please input size of pyramid: ");
    scanf("%d", &size);

    for (i = size; i >= 1; i--)
    {
        for (space = 1; space <= size - i; space++)
            printf(" ");
        for (j = 1; j <= 2*i-1; j++)
            printf("#");
        printf("\n");
    }

}