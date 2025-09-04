#include <iostream>

using namespace std;

int main(void)
{
    char choice;
    do
    {
        cout << "Do you want to play something fun? (y/n): ";

        cin >> choice;

        switch (choice)
        {
            case 'Y':
                cout << "Great! Let us play some music or a game!" << endl;
                break;
            case 'y':
                cout << "Great! Let us play some music or a game!" << endl;
                break;
            case 'N':
                cout << "Okay, see you next time!" << endl;
                break;
            case 'n':
                cout << "Okay, see you next time!" << endl;
                break;
            default:
                cout << "Invalid input. Please enter 'y' or 'n'." << endl;
        }
    } 
    while (choice == 'Y' || choice == 'y');
    cout << "Thank you for playing!" << endl;

}