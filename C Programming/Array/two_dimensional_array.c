#include <stdio.h>

int main(void) {

    int marks[5][3] = {
        {85, 90, 78},
        {92, 88, 95},
        {80, 85, 87},
        {90, 92, 94},
        {88, 86, 84}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}