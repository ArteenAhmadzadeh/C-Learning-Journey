#include <stdio.h>

int main(void)
{
    int number = 42;
    float decimal = 5.75;
    double precise = 3.141592;
    char letter = 'C';
    char name[] = "Arteen";

    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Double: %.6lf\n", precise);
    printf("Character: %c\n", letter);
    printf("String: %s\n", name);

    return 0;
}
