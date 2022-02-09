#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#define SEED 2022;

int main()
{

    // prompting user for # of players
    int numplayers = 0;
    printf("How many players? ");
    scanf("%d", &numplayers);
    if (numplayers > 10 || numplayers < 2)
    {
        fprintf(stderr, "Invalid number of players. Using 2 instead.\n");
        numplayers = 2;
    }

    // declaring and zeroing out scores array
    int scores[numplayers];
    for (int i = 0; i < numplayers; i++)
    {
        scores[i] = 0;
    }

    // prompting user for seed
    unsigned long int seed;
    printf("Random seed: ");
    if (scanf("%lu", &seed) != 1)
    {
        fprintf(stderr, "Invalid random seed. Using 2022 instead.\n");
        seed = SEED;
    }
    else if (seed <= 0 || seed >= ULONG_MAX)
    {
        fprintf(stderr, "Invalid random seed. Using 2022 instead.\n");
        seed = SEED;
    }
    srandom(seed);
    for (int i = 0; i < 20; i++)
    {
        printf("random num: %lu\n", random() % 7 + 1);
    }

    return 0;
}
