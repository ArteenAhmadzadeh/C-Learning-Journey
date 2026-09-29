#include <stdio.h>

int main(void)
{
    int numbers[3][4] =
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (int row = 0; row < 3; row++)
    {
        for (int column = 0; column < 4; column++)
        {
            printf("%3d", numbers[row][column]);
        }

        printf("\n");
    }

    return 0;
}
