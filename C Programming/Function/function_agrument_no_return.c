#include <stdio.h>

void printsum(int num1, int num2);

int main(void) {
    printsum(5, 10);
    return 0;
}

void printsum(int num1, int num2) {
    printf("The sum is: %d\n", num1 + num2);
}
