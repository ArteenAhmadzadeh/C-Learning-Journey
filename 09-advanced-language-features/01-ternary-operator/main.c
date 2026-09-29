#include <stdio.h>

int main(void)
{
    int age = 20;
    const char *status = (age >= 18) ? "Adult" : "Minor";

    printf("Age: %d\n", age);
    printf("Status: %s\n", status);

    return 0;
}
