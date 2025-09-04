#include <iostream>

using namespace std;

int main()
{
    int age1;
    int age2 = 18;

    cout << " Please eneter your age" << endl;
    cin >> age1;

    if (age1 >= age2) 
    {
        cout << "You are too old to join our program" << endl;
    }
    else
    { 
        cout << "You are young enough to join our program" << endl;
    }

}