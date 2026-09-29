#include <stdio.h>

int main(void)
{
    int age;
    int money;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your money: ");
    scanf("%d", &money);

    if(age >= 18 && money >= 100)
    {
        printf("You can enter.\n");
    }
    else
    {
        printf("You cannot enter.\n");
    }

    return 0;
}
