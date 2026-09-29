#include <stdio.h>

int main(void)
{
    const char names[][20] =
    {
        "Alice",
        "Bob",
        "Charlie",
        "Diana"
    };

    int size = sizeof(names) / sizeof(names[0]);

    printf("Names:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
