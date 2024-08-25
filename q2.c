#include <stdio.h>

int main()
{
    int num;

    scanf("%d", &num);
    // upper half
    for (int x = 1; x <= num; x++)
    {
        for (int y = 1; y <= num - x; y++)
        {
            printf(" ");
        }

        for (int z = 1; z <= 2 * x - 1; z++)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower half
    for (int a = num - 1; a >= 1; a--)
    {
        for (int b = 1; b <= num - a; b++)

        {
            printf(" ");
        }

        for (int c = 1; c <= 2 * a - 1; c++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}