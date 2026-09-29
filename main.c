#include <stdio.h>

int main(void)
{
    char name[50], place[50], animal[50];

    printf("Enter name, place, animal: ");
    scanf("%49s %49s %49s", name, place, animal);

    printf("%s went to %s and found a %s!\n", name, place, animal);

    return 0;
}
