#include <iostream>

using namespace std;

int main(void)
{
    int marks[5] = {80, 90, 85, 95, 88};

    for (int i = 0; i < 5; i++)
    {
        cout << "Mark(" << i + 1 << "): " << marks[i] << endl;
    }
    return 0;
}