#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main()
{

    // prompting user for # of players
    int input = 0;
    scanf("%d", &input);
    if (input > 10 || input < 2)
    {
        fprintf(stderr, "Invalid number of players. Using 2 instead.\n");
    }

    // declaring and zeroing out scores array
    int scores[input];
    for (int i = 0; i < input; i++)
    {
        scores[i] = 0;
    }

    return 0;
}
