#include <iostream>

using namespace std;

int main()
{
        cout << "Enter your name: " << flush;
        string name;
        cin >> name;
        cout << "You entered: " << name << endl;

        cout << "Enter a number: " << flush;
        int number;
        cin >> number;
        cout << "You entered: " << number << endl;

        return 0;
}
