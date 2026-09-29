#include <stdio.h>

struct Student
{
    char name[50];
    int age;
    double grade;
};

int main(void)
{
    struct Student students[] =
    {
        {"Alice", 20, 91.5},
        {"Bob", 21, 84.0},
        {"Charlie", 19, 95.0}
    };

    int count = sizeof(students) / sizeof(students[0]);

    printf("Students:\n");

    for (int i = 0; i < count; i++)
    {
        printf("%d. %s | Age: %d | Grade: %.1f\n",
               i + 1,
               students[i].name,
               students[i].age,
               students[i].grade);
    }

    return 0;
}
