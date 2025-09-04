#include <iostream>

using namespace std;

int main(void)
{

    float gpa1, gpa2, gpa3;
    int avggpa = 4;
    int mingpa = 2;

    cout << "Enter your GPA for the past three semesters:" << endl;
    cout << "GPA 1: "; cin >> gpa1;
    cout << "GPA 2: "; cin >> gpa2;
    cout << "GPA 3: "; cin >> gpa3;

    float averagen = (gpa1 + gpa2 + gpa3) / 3;

    cout << "Your average GPA is:" << averagen << endl;

    if  ( averagen >= avggpa )
    {
        cout << " Congratulations! You have a good GPA." << endl;
    }
    else if (averagen < avggpa && averagen > mingpa)
    {
        cout << "You have an average GPA. Keep working hard!" << endl;
    }
    else
    {
        cout << "You need to improve your GPA." << endl;
    }
}