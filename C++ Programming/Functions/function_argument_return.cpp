#include <iostream>

using namespace std;

int summation(int num[4])
{
    int sum = 0;
    for (int i =0; i < 5; i++)
    {
        sum += num[i];
    }
return sum;
}

float average(int marks[4])
{
    float total = summation(marks);
    float avg = total / 5;
    return avg;
}

int main(void)
{
    int numbers[4];
    cout << "Please enter your Marks" << endl;

    for ( int i = 0; i < 5; i++)
    {
        cout << i + 1 << ". Mark " << i + 1 << " is "; cin >> numbers[i];
    }

    cout << endl;
    cout << "The sum is " << summation(numbers) << endl;
    cout << "The average is " << average(numbers) << endl;
    return 0;
}