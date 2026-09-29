#include <stdio.h>

int main(void)
{
    char item[50];
    float price;
    int quantity;

    printf("Item: ");
    scanf("%49s", item);

    printf("Price: ");
    scanf("%f", &price);

    printf("Quantity: ");
    scanf("%d", &quantity);

    printf("Total: %.2f\n", price * quantity);

    return 0;
}
