#include <iostream>

using namespace std;

int main(void)
{ 
    int num1;

    num1 = 1;

    while (num1 <= 12)
    { 
        int num2 = 1;
        while (num2 <= 12)
        {
            int product = num1 * num2;
            cout << num1 << "*" << num2 << "=" << product << endl;
            num2++;
        }
        num1++;
        cout << endl;
    }
}