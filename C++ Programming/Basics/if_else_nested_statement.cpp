#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b) {
        if (a > c) {
            cout << "a is the greatest" << endl;
        } else if (c > a) {
            cout << "c is the greatest" << endl;
        } else {
            cout << "a and c are equal and greatest" << endl;
        }
    } else{
        if (b > c) {
            cout << "b is the greatest" << endl;
        } else if (c > b) {
            cout << "c is the greatest" << endl;
        } else {
            cout << "b and c are equal and greatest" << endl;
        }
    }
    return 0;
}