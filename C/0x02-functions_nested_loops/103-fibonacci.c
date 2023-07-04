#include <stdio.h>

int main()
{
    int i;
    long unsigned int m = 1, n = 2;
    long unsigned int sum = 0;

    printf("%ld, ", m);
    printf("%ld, ", n);

    for (i = 1; sum < 4000000; i++)
    {
        sum = m + n;
        m = n;
        n = sum;
        if ((sum < 4000000) && (sum % 2 == 0))
        {
            printf("%ld, ", sum);
        }
    }
    // printf("%ld\n", sum);
    return 0;
}