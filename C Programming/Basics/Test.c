#include <stdio.h>

int sum(int a[5]) {

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        // sum = sum + a[i];
        sum += a[i];
    }

    return sum;
}

int average(int a[5]) {

    int total = sum(a);
    int avg = total / 5;
    return avg;
}

int main(void) {
    int mark[5];

    printf("Enter marks for five subjects:\n");
    for(int i = 0; i < 5; i++) {
        printf("%i. ",i+1);
        printf("Mark %d:",i+1);
        scanf("%d",&mark[i]);
    }
    printf("\n");
    int avg = average(mark);

    printf("The average mark is: %d\n", avg);

    return 0;
}