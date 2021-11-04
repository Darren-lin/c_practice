#include <stdio.h>
#define multi 25


int main() {
    float i = 1.0;
    while (i <= 5000.0){
        printf("This is the value of i: %6f\n", i);
        i += i * multi;
    }
    return 0;

}