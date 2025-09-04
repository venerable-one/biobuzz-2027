#include <iostream>

using namespace std;

float randomFloat(void)
{
    return 3.14; 
}

int main(void)
{
    float result = randomFloat();
    cout << "Random float: " << result << endl;
    return 0;
}