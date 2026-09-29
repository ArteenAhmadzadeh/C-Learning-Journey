#include <stdio.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

static void clear_screen(void)
{
    printf("\033[2J\033[H");
}

static void wait_one_second(void)
{
#ifdef _WIN32
    Sleep(1000);
#else
    sleep(1);
#endif
}

int main(void)
{
    char time_string[9];

    while (1)
    {
        time_t now = time(NULL);
        struct tm *local_time = localtime(&now);

        if (local_time == NULL)
        {
            fprintf(stderr, "Could not get the current local time.\n");
            return 1;
        }

        if (strftime(time_string,
                     sizeof(time_string),
                     "%H:%M:%S",
                     local_time) == 0)
        {
            fprintf(stderr, "Could not format the current time.\n");
            return 1;
        }

        clear_screen();

        printf("====================\n");
        printf("    DIGITAL CLOCK\n");
        printf("====================\n");
        printf("      %s\n", time_string);
        printf("====================\n");
        printf("Press Ctrl+C to exit.\n");

        fflush(stdout);

        wait_one_second();
    }

    return 0;
}
