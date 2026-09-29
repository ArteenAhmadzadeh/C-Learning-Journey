#include <stdio.h>

int main(void)
{
    float temp;
    char unit;

    scanf("%f %c", &temp, &unit);

    if (unit == 'C')
        printf("%.2f F\n", temp * 9 / 5 + 32);
    else
        printf("%.2f C\n", (temp - 32) * 5 / 9);

    return 0;
}
