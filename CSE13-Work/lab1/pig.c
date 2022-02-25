#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdbool.h>
#include "names.h"

#define SEED 2022;

typedef enum
{
    SIDE,
    RAZORBACK,
    TROTTER,
    SNOUTER,
    JOWLER
} Position;
const Position pig[7] = {SIDE, SIDE, RAZORBACK, TROTTER, SNOUTER, JOWLER, JOWLER};
const int points[7] = {0, 0, 10, 10, 15, 5};
const char *msg[7] = {"pig lands on side", "pig lands on side", "pig lands on back", "pig lands upright", "pig lands on ear", "pig lands on ear"};
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
    int scores[numplayers];
    const char *players[numplayers];
    for (int i = 0; i < numplayers; i++)
    {
        players[i] = names[i];
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
    srandom(seed);

    Position action = 6;
    int player = 0;
    bool play = true;
    while (play)
    {
        if (player == 8)
        {
            player = 0;
        }
        do
        {
            action = pig[random() % 7];
        } while ((action != SIDE) && scores[player] < 100);
        {
            if (action == RAZORBACK)
            {
                scores[player] += 10;
            }
            else if (action == TROTTER)
            {
                scores[player] += 10;
            }
            else if (action == SNOUTER)
            {
                scores[player] += 15;
            }
            else if (action == JOWLER)
            {
                scores[player] += 5;
            }
        }
        player += 1;
        return 0;
    }
