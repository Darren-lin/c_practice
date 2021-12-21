#include <stdlib.h>
#include <stdio.h>

#define HIGHER 300

int main() {
    float lower;
    float cel, far;
    lower = 0;
    while (lower <= HIGHER){
        far = lower;
        cel = (5.0/9.0) * (far-32.0);
        printf("%3.2f  -   %6.2f\n", far,cel);
        lower += 20;
    }
    return 0;
}