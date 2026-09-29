#include <stdio.h>

int main(void)
{
    int age;
    int hasID;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Do you have an ID? (1 = Yes, 0 = No): ");
    scanf("%d", &hasID);

    if(age >= 18)
    {
        if(hasID == 1)
        {
            printf("Access granted.\n");
        }
        else
        {
            printf("You need an ID.\n");
        }
    }
    else
    {
        printf("You are too young.\n");
    }

    return 0;
}
