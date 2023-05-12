#include "main.h"

int _atoi(char *s)
{
    int i = 0;
    int j = 0;
    int m = 1;
    int n = 0;

    /* Traverse the string to find characters outside
        range 0 to 9 */
    while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
    {
        if (s[i] == '-')
            m = m * -1;
        i++;
    }
    j = i;

    /* Within the range 0 to 9 */
    while (s[j] >= '0' && s[j] <= '9')
    {
        n = n * 10 + m * (s[j] - '0');
        j++;
    }
    
    return n;
}
