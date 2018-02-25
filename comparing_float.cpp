/**
 * comparing_float.cpp
 *
 * Written by Billy Wilson Arante <arantebillywilson@gmail.com>
 * Last updated on 2018/02/25 PHT
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        float value = 1.11;

        cout << (value == 1.11) << endl;  // False

        cout << setprecision(10) << value << endl;

        cout << (value > 1.11) << endl;  // True

        return 0;
}
