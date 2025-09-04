#include <stdio.h>

int main(void){

    int marks[5] = {85, 90, 78, 92, 88};

    // printf("%d\n", marks[0]); // Accessing the first element
    // printf("%d\n", marks[1]); // Accessing the second element

    for (int i = 0; i < 5; i++) {
        printf("Marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}