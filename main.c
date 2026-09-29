#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand((unsigned int)time(NULL));

    printf("Random number: %d\n", rand());
    printf("Random number from 1 to 100: %d\n", rand() % 100 + 1);

    return 0;
}
