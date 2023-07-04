#include <stdio.h>

void main()
{
    int i, j, row, space, mid;
    printf("How big do you want your diamond: ");
    scanf("%d", &row);

    mid = (row/2)+1;

    /* Upper Half */
    for (i = 1; i <= mid; i++)
    {
        for (space = 1; space <= mid - i; space++)
            printf(" ");
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
    /* Lower Half*/
    for (i = mid - 1; i >= 1; i--)
    {
        for (space = 1; space <= mid - i; space++)
            printf(" ");
        for (j = 1; j <= 2*i - 1; j++)
            printf("*");
        printf("\n");
    }
}