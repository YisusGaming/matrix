#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rows.h"

int main(int argc, char const *argv[])
{
    char *colors[] = {
        /* reset */ "\033[1;0m", 
        /* green */ "\033[1;32m", 
        /* magenta */ "\033[1;35m",
        /* cyan */ "\033[1;36m",
        /* yellow */ "\033[1;33m"
    };

    while(1 == 1) {
        char* row = generate_random_row();
        int i_color = rand() % 5;
        printf("%s%s%s", colors[i_color], row, colors[0]);

        free(row); // if this thing has memory leaks I'm gonna cry
    }
    return 0;
}
