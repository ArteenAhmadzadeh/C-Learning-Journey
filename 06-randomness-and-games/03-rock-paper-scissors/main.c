#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int player;
    int computer;

    srand((unsigned int)time(NULL));

    printf("=== Rock Paper Scissors ===\n");
    printf("1. Rock\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");
    printf("Choose your move: ");
    scanf("%d", &player);

    if (player < 1 || player > 3)
    {
        printf("Invalid choice. Please choose 1, 2, or 3.\n");
        return 1;
    }

    computer = rand() % 3 + 1;

    printf("You chose: ");

    switch (player)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    printf("Computer chose: ");

    switch (computer)
    {
        case 1:
            printf("Rock\n");
            break;
        case 2:
            printf("Paper\n");
            break;
        case 3:
            printf("Scissors\n");
            break;
    }

    if (player == computer)
    {
        printf("It's a tie!\n");
    }
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2))
    {
        printf("You win!\n");
    }
    else
    {
        printf("Computer wins!\n");
    }

    return 0;
}
