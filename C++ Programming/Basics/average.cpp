#include <iostream>

using namespace std;

int main() {
    // Calculate the average of four marks
    int mark1, mark2, mark3, mark4;
    int total;
    float average;

    cout << "Enter your Marks: ";
    cin >> mark1 >> mark2 >> mark3 >> mark4;
    
    total = mark1 + mark2 + mark3 + mark4;
    average = total / 4.0;

    cout << "Total " << total << endl;
    cout << "Average: " << average << endl;

    return 0;
}