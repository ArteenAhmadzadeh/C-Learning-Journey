#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 5;
    int *numbers = calloc(count, sizeof(int));

    if (numbers == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Values immediately after calloc():\n");

    for (int i = 0; i < count; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    for (int i = 0; i < count; i++)
    {
        numbers[i] = (i + 1) * 100;
    }

    printf("\nValues after assigning data:\n");

    for (int i = 0; i < count; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    free(numbers);
    numbers = NULL;

    return 0;
}
