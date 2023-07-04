#include <stdio.h>

int main()
{
    int i;
    long unsigned int m = 1, n = 2;
    long unsigned int sum = 0;

    printf("%ld, ", m);
    printf("%ld, ", n);

    for (i = 1; i < 50; i++)
    {
        sum = m + n;
        printf("%ld, ", sum);
        m = n;
        n = sum;
    }
    printf("%ld\n", sum);
    return 0;
}