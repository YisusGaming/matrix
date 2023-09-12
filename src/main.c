#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rows.h"

int main(int argc, char const *argv[])
{
    while(1 == 1) {

        char* row = generate_random_row();
        printf("%s", row);

        free(row); // if this thing has memory leaks I'm gonna cry
    }
    return 0;
}
