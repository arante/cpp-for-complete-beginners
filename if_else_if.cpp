/**
 * if_else_if.cpp
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last update on 2018/02/25 PHT
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        cout << "1 - Add New User" << endl;
        cout << "2 - Show All Users" << endl;
        cout << "3 - Update User" << endl;
        cout << "4 - Delete User" << endl;
        cout << "5 - View User" << endl;
        cout << "0 - Quit" << endl;

        cout << "\nEnter your option: " << flush;

        int option;
        cin >> option; 

        if (option == 1) {
                cout << "\n** Add New User **" << endl;
        }
        else if (option == 2) {
                cout << "\n** Show All Users **" << endl;
        }
        else if (option == 3) {
                cout << "\n** Update User **" << endl;
        }
        else if (option == 4) {
                cout << "\n** Delete User **" << endl;
        }
        else if (option == 5) {
                cout << "\n** View User **" << endl;
        }
        else if (option == 0) {
                cout << "\nQuit" << endl;
        }
        else {
                cout << "\nInvalid option entered." << endl;
        }

        return 0;
}
