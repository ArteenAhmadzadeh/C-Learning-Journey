#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secret_number;
    int guess;
    int attempts = 0;

    srand((unsigned int)time(NULL));
    secret_number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("I picked a number between 1 and 100.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret_number)
        {
            printf("Too low!\n");
        }
        else if (guess > secret_number)
        {
            printf("Too high!\n");
        }
        else
        {
            printf("Correct! You guessed it in %d attempt(s).\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}
