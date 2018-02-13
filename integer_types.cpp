/**
 * integer_types.cpp
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/14 PHT
 */

#include <iostream>
#include <climits>

using namespace std;

int main()
{
        int value = 54656;
        cout << value << endl;

        cout << "Max int value: " << INT_MAX << endl;
        cout << "Min int value: " << INT_MIN << endl;

        long int longValue = 23525235235235;
        cout << longValue << endl;
        
        short int shortValue = 2344;
        cout << shortValue << endl;

        cout << "Size of int: " << sizeof(int) << endl;
        cout << "Size of short int: " << sizeof(short int) << endl;

        unsigned int unsignedValue = 1234567890;
        cout << unsignedValue << endl;

        return 0;
}
