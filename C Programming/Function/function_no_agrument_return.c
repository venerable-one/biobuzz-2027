#include <stdio.h>

float randomFloat(void);

int main(void) {
    float result = randomFloat();
    printf("Random float: %f\n", result);
    return 0;
}

float randomFloat(void) {
    return 3.14; 
}