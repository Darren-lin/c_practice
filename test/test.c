#include <stdlib.h>
#include <stdio.h>

#define HIGHER 300

int main() {
    //Finds Celsius from 0 fahr to 300 fahr 
    // 
    // float lower;
    // float cel, far;
    // lower = 0;
    // while (lower <= HIGHER){
    //     far = lower;
    //     cel = (5.0/9.0) * (far-32.0);
    //     printf("%3.2f  -   %6.2f\n", far,cel);
    //     lower += 20;
    // }

    int c, nl;
    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        ++nl;
    printf("%d\n", nl);
  
}
