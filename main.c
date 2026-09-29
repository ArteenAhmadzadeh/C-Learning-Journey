#include <stdio.h>

int main(void)
{
    float weight;
    char unit;

    scanf("%f %c", &weight, &unit);

    if (unit == 'K')
        printf("%.2f kg\n", weight);
    else
        printf("%.2f lbs\n", weight * 2.205);

    return 0;
}
