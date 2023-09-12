/*
* Copyright (C) 2023 Jesús "YisusGaming" Blanco
* Released under the MIT License.
*
* See LICENSE for full license details.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "rows.h"

char *generate_random_row() 
{
    srand(time(0) + 1); // set random seed

    char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n = (rand() % 100 - 2) + 1; // (random) number (between 1-100) of characters in this row.
    
    char *row = malloc(n * sizeof(char));
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n) { // if we're at the last index
            row[i] = '\0'; // add null terminator
            break;
        }

        int i_letter = (rand() % 30 - 1) + 1; // (random) index (between 0-30) for letters.
        if (i_letter >= 0 && i_letter < 25) {
            row[i] = letters[i_letter];
            continue;
        }
        row[i] = ' ';
    }

    return row;
}
