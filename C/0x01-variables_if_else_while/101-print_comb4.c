#include <stdio.h>

int main()
{
    int i, j, k;


    for (i = '0'; i <= '9'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            for (k = '0'; k <= '9'; k++)
            {   
                if ((i < j) && (j < k) && (i != j) && (j != k))
                {
                    putchar (i);
                    putchar (j);
                    putchar (k);
                    if (!(i == '7' && j == '8' && k == '9'))
                    {
                        putchar (',');
                        putchar (' ');
                    }
                }
            }
        }
    }
    putchar('\n');
}