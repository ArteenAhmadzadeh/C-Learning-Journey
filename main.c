#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *questions[] =
    {
        "What language is this journey about?",
        "Which symbol is used to access an array element?",
        "How many indexes does a 2D array use?"
    };

    const char *answers[] =
    {
        "C",
        "[]",
        "2"
    };

    const int question_count = sizeof(questions) / sizeof(questions[0]);
    char user_answer[50];
    int score = 0;

    printf("=== C Programming Quiz ===\n\n");

    for (int i = 0; i < question_count; i++)
    {
        printf("Question %d: %s\n", i + 1, questions[i]);
        printf("Answer: ");

        if (fgets(user_answer, sizeof(user_answer), stdin) == NULL)
        {
            printf("Input error.\n");
            return 1;
        }

        user_answer[strcspn(user_answer, "\n")] = '\0';

        if (strcmp(user_answer, answers[i]) == 0)
        {
            printf("Correct!\n\n");
            score++;
        }
        else
        {
            printf("Incorrect. The answer is: %s\n\n", answers[i]);
        }
    }

    printf("Quiz complete!\n");
    printf("Score: %d/%d\n", score, question_count);

    return 0;
}
