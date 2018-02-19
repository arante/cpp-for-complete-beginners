/**
 * other.cpp
 * Primitive types bool, char, and wchar_t.
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/19 PHT
 */

#include <iostream>

using namespace std;

int main()
{
        bool booleanValue = true;
        cout << booleanValue << endl;

        cout << "sizeof(bool): " << sizeof(bool) << endl;

        //char characterValue = 55;
        char characterValue = '7';
        //cout << characterValue << endl;
        cout << (int)characterValue << endl;

        cout << "sizeof(char): " << sizeof(char) << endl;

        wchar_t wideCharacterValue = 'i';
        //cout << wideCharacterValue << endl;
        cout << (char)wideCharacterValue << endl;

        cout << "sizeof(wchar_t): " << sizeof(wchar_t) << endl;

        return 0;
}
