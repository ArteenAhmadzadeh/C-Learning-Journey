#include <stdio.h>

/*
 * Function prototypes tell the compiler about functions
 * before they are used in main().
 */
int multiply(int a, int b);
void show_result(int value);

int main(void)
{
    int result = multiply(6, 7);

    show_result(result);

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}

void show_result(int value)
{
    printf("Result: %d\n", value);
}
