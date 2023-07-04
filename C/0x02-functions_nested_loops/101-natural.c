#include <stdio.h>

int main()
{
    int n = 1024;
    int i;
    int sum = 0;
    
    for (i = 1; i < n; i++)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            sum += i;
        }
        else
            continue;
    }
    printf("%d\n", sum);
}