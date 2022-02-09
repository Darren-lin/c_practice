#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#define SEED 2022;

void result(char* action, int roll);

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
    srandom(seed);

    // attempting to get action
    char* action = "";
    for(int i = 0; i < 10; i++){
        result(action, random() % 7 + 1);
        printf("%s\n", action);
    }
    return 0;
}

void result(char* action, int roll){
    char* arr [7]= {"side", "side", "razorback", "trotter", "snouter", "jowler", "jowler"};
    action = arr[roll];
}
