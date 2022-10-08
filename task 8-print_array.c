#include "main.h"

void print_array(int *a, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		if(i != (n - 1)
		   printf("%d, ", a[i]);
		else
		   printf("%d", a[i]);
	}
	printf("\n");
}

OR

void print_array(int *a, int n)
{
    int i = 0;

    while (a[i] < a[n])
    {
        printf("%d", a[i]);
        if (i != (n - 1))
            printf(", ");
        i++;
    }
}
