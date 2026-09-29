#include <stdio.h>

int main(void)
{
    printf("break example:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            break;
        }

        printf("%d ", i);
    }

    printf("\n\ncontinue example:\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
