#include <iostream>

using namespace std;

void printMessage( char initial1, char initial2)
{
    cout << "Hello, " << initial1 << " and " << initial2 << "!" << endl;
}

int main(void)
{
    char name1 = 'A', name2 = 'B';
    cout << "Welcome to the program!" << endl;
    cout << "This program will greet you." << endl;
    printMessage(name1, name2);
    cout << "Goodbye, " << name1 << " and " << name2 << "!" << endl;
}