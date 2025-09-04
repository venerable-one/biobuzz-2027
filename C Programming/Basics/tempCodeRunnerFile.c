#include <stdio.h>

int summation(int num[4])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += num[i];
    }
    return sum;
}

float average(int marks[4])
{
    int total = summation(marks);
    float avg = (float)total / 5;
    return avg;
}

int main(void)
{
    int numbers[4];

    printf("Please enter your Marks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d. ", i + 1);
        printf("Mark%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\n");
    printf("The sum is: %d\n", summation(numbers));
    printf("The average is: %f\n", average(numbers));

}