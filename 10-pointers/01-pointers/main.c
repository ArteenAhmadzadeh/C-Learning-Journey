#include <stdio.h>

int main(void)
{
    int number = 42;
    int *ptr = &number;

    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", (void *)&number);
    printf("Value stored in ptr: %p\n", (void *)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    printf("\nChanging the value through the pointer...\n");

    *ptr = 100;

    printf("New value of number: %d\n", number);
    printf("Value through ptr: %d\n", *ptr);

    return 0;
}
