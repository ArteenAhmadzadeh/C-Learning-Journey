#include <stdio.h>

int add(int a, int b);
double average(double a, double b);

int main(void)
{
    int sum = add(10, 20);
    double result = average(10.0, 20.0);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", result);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

double average(double a, double b)
{
    return (a + b) / 2.0;
}
