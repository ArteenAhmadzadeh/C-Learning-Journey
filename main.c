#include <stdio.h>

int main(void)
{
    FILE *file = fopen("journal.txt", "r");
    char line[256];

    if (file == NULL)
    {
        printf("Could not open journal.txt.\n");
        printf("Run the writing-files program first.\n");
        return 1;
    }

    printf("=== Contents of journal.txt ===\n");

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}
