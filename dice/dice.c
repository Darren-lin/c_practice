#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main (){
    time_t t;
    srand((unsigned) time(&t));
    char input[5];

    printf("roll dice?: ");
    scanf("%s", input);
    
    if(strcmp("yes", input) == 0 || strcmp("Yes", input) == 0 || strcmp("y", input) == 0 || strcmp("Y", input) == 0){
        printf("%d\n", 1 + rand() % (7-1));
    }
    else if(strcmp("yes", input) != 0 || strcmp("Yes", input) != 0 || strcmp("y", input) == 0 || strcmp("Y", input) != 0){
        return 0;
    }


}
