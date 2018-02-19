/**
 * if.cpp
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/19 PHT
 */

#include <iostream>

using namespace std;

int main()
{
        string password = "hello";
        cout << "Enter your password > " << flush;

        string input;
        cin >> input;

        //cout << "'" << input << "'" << endl;

        if (input == password) {
                cout << "Password accepted." << endl;
        }

        if (input != password) {
                cout << "Access denied." << endl;
        }

        return 0;
}
