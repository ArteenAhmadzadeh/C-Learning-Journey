#include <stdio.h>

int main(void)
{
    int age = 18;
    float height = 1.75;
    double pi = 3.1415926535;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Pi value: %.10lf\n", pi);
    printf("Grade: %c\n", grade);

    return 0;
}
