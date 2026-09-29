#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int count = 3;
    int *numbers = malloc(count * sizeof(int));

    if (numbers == NULL)
    {
        printf("Initial allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < count; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("Before realloc():\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int new_count = 6;
    int *temp = realloc(numbers, new_count * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(numbers);
        return 1;
    }

    numbers = temp;

    for (int i = count; i < new_count; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    count = new_count;

    printf("\nAfter realloc():\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    free(numbers);
    numbers = NULL;

    return 0;
}
