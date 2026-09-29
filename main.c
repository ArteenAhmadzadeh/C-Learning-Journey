#include <stdio.h>

int global_number = 100;

void show_scope(void);

int main(void)
{
    int local_number = 10;

    printf("Inside main - local_number: %d\n", local_number);
    printf("Inside main - global_number: %d\n", global_number);

    show_scope();

    return 0;
}

void show_scope(void)
{
    int function_number = 20;

    printf("Inside show_scope - function_number: %d\n", function_number);
    printf("Inside show_scope - global_number: %d\n", global_number);
}
