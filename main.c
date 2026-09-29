#include <stdio.h>

enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

int main(void)
{
    enum Day today = WEDNESDAY;

    if (today == WEDNESDAY)
    {
        printf("Today is Wednesday.\n");
    }

    printf("Numeric value of today: %d\n", today);

    return 0;
}
