#include <stdio.h>

struct Person
{
    char name[50];
    int age;
    double height;
};

int main(void)
{
    struct Person person = {"Alex", 25, 1.75};

    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Height: %.2f m\n", person.height);

    return 0;
}
