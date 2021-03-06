#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <inttypes.h>
#include "names.h"

#define SEED 2022

typedef enum
{
    SIDE,
    RAZORBACK,
    TROTTER,
    SNOUTER,
    JOWLER
} Position;

const Position pig[7] = {SIDE, SIDE, RAZORBACK, TROTTER, SNOUTER, JOWLER, JOWLER};
const int points[7] = {0, 0, 10, 10, 15, 5, 5};
const char *msg[7] = {" pig lands on side", " pig lands on side", " pig lands on back", " pig lands upright", " pig lands on snout", " pig lands on ear", " pig lands on ear"};

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

    // creating and names and score array
    int scores[numplayers];
    const char *players[numplayers];
    for (int i = 0; i < numplayers; i++)
    {
        players[i] = names[i];
        scores[i] = 0;
    }

    // prompting user for seed
    int64_t seed;
    printf("Random seed: ");
    if (scanf("%" PRId64, &seed) == EOF || seed < 0)
    {
        fprintf(stderr, "Invalid random seed. Using 2022 instead.\n");
        seed = SEED;
    }
    srandom(seed);

    // play loop
    Position action;
    int player = 0;
    bool play = true;
    int temp;
    while (play)
    {
        if (player == numplayers)
        {
            player = 0;
        }
        printf("%s rolls the pig...", names[player]);
        do
        {
            temp = random() % 7;
            action = pig[temp];
            scores[player] += points[temp];
            printf("%s", msg[temp]);
        } while (action != SIDE && scores[player] < 100);
        printf("\n");
        if (scores[player] >= 100)
        {
            play = false;
        }
        else
        {
            player += 1;
        }
    }

    printf("%s wins with %d points!\n", names[player], scores[player]);
    return EXIT_SUCCESS;
}
