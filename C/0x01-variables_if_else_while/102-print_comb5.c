#include <stdio.h>

int main()
{
    int i, j, k, l;

    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {   
                for (l = '0'; l <= '9'; l++)
                {
                    if ((k + l) > (i + j) && (k >= i) || (i < k))
                    {
                        putchar (i);
                        putchar (j);
                        putchar (' ');
                        putchar (k);
                        putchar (l);
                        if (!(i == '9' && j == '8' && k == '9' && l == '9'))
                        {
                            putchar (',');
                            putchar (' ');
                        }
                    }
                }
            }
        }
    }
    putchar('\n');

    return 0;
}