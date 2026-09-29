#include <stdio.h>

int main(void)
{
    FILE *file = fopen("journal.txt", "w");

    if (file == NULL)
    {
        printf("Could not open the file.\n");
        return 1;
    }

    fprintf(file, "C Programming Journey\n");
    fprintf(file, "This file was created from a C program.\n");
    fprintf(file, "I am learning file handling!\n");

    fclose(file);

    printf("Data was written to journal.txt successfully.\n");

    return 0;
}
