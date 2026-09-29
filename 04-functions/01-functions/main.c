#include <stdio.h>

void greet(void);
void print_line(void);

int main(void)
{
    print_line();
    greet();
    print_line();

    return 0;
}

void greet(void)
{
    printf("Hello! Welcome to my C programming journey.\n");
}

void print_line(void)
{
    printf("------------------------------\n");
}
