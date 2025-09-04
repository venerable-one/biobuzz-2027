#include <iostream>

using namespace std;

int main(void)
{
    int choice;

    cout << "What is your choice? "; cin >> choice;

    if (choice <= 5)
    {
        switch(choice)
        {
            case 1:
                cout << "You selected option 1." << endl;
                break;
            case 2:
                cout << "You selected option 2." << endl;
                break;
            case 3:
                cout << "You selected option 3." << endl;
                break;
            case 4:
                cout << "You selected option 4." << endl;
                break;
            case 5:
                cout << "You selected option 5." << endl;
                break;
        }
    }
    else
    {
        switch (choice)
        {
            case 6:
                cout << "You selected option 6." << endl;
                break;
            case 7:
                cout << "You selected option 7." << endl;
                break;
            case 8:
                cout << "You selected option 8." << endl;
                break;
            case 9:
                cout << "You selected option 9." << endl;
                break;
            case 10:
                cout << "You selected option 10." << endl;
                break;
            default:
                cout << "Invalid selection." << endl; 

        }
    }
}