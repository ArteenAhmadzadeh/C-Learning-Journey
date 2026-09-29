#include <stdio.h>

typedef unsigned int uint;

typedef struct
{
    int x;
    int y;
} Point;

int main(void)
{
    uint age = 25;
    Point position = {10, 20};

    printf("Age: %u\n", age);
    printf("Position: (%d, %d)\n", position.x, position.y);

    return 0;
}
