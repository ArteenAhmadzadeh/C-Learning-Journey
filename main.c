#include <stdio.h>

void show_balance(double balance);
double deposit(double balance);
double withdraw(double balance);

int main(void)
{
    double balance = 0.0;
    int choice;

    do
    {
        printf("\n==============================\n");
        printf("       BANKING PROGRAM\n");
        printf("==============================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Choose an option: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n')
            {
                /* Clear invalid input from the buffer. */
            }

            choice = 0;
            continue;
        }

        switch (choice)
        {
            case 1:
                show_balance(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("Thank you for using the banking program!\n");
                break;

            default:
                printf("Invalid option. Please choose 1-4.\n");
        }

    } while (choice != 4);

    return 0;
}

void show_balance(double balance)
{
    printf("Current balance: $%.2f\n", balance);
}

double deposit(double balance)
{
    double amount;

    printf("Enter deposit amount: $");

    if (scanf("%lf", &amount) != 1)
    {
        printf("Invalid amount.\n");

        while (getchar() != '\n')
        {
            /* Clear invalid input from the buffer. */
        }

        return balance;
    }

    if (amount <= 0)
    {
        printf("Deposit must be greater than zero.\n");
        return balance;
    }

    balance += amount;

    printf("$%.2f deposited successfully.\n", amount);

    return balance;
}

double withdraw(double balance)
{
    double amount;

    printf("Enter withdrawal amount: $");

    if (scanf("%lf", &amount) != 1)
    {
        printf("Invalid amount.\n");

        while (getchar() != '\n')
        {
            /* Clear invalid input from the buffer. */
        }

        return balance;
    }

    if (amount <= 0)
    {
        printf("Withdrawal must be greater than zero.\n");
        return balance;
    }

    if (amount > balance)
    {
        printf("Insufficient funds.\n");
        return balance;
    }

    balance -= amount;

    printf("$%.2f withdrawn successfully.\n", amount);

    return balance;
}
