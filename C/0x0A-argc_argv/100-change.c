#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int cents[] = {25, 10, 5, 2, 1};
    int money;
    int i, count = 0;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    money = atoi(argv[1]);
    if (money < 0)
        printf("0\n");
    else
    {
        for (i = 0; i < 5; i++)
        {
            if (money >= cents[i])
                count += money / cents[i];
            
            money %= cents[i];
            
            if (money % cents[i] == 0)
                break;
        }
        printf("%d\n", count);
    }
    return 0;

}