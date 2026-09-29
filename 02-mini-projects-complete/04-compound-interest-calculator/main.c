#include <stdio.h>
#include <math.h>

int main(void)
{
    double principal, rate;
    int years;

    scanf("%lf %lf %d", &principal, &rate, &years);

    rate /= 100;

    printf("%.2lf\n", principal * pow(1 + rate / 12, 12 * years));

    return 0;
}
