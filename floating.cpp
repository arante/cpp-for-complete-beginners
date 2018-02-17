#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        float fValue = 123.456789;
        cout << setprecision(20) << fixed << fValue << endl;
        cout << scientific << fValue << endl;
        cout << "sizeof(float): " << sizeof(float) << endl;

        cout << "\n";

        double dValue = 123.456789;
        cout << setprecision(20) << fixed << dValue << endl;
        cout << scientific << dValue << endl;
        cout << "sizeof(double): " << sizeof(double) << endl;

        cout << "\n";

        long double lValue = 123.456789;
        cout << setprecision(20) << fixed << lValue << endl;
        cout << scientific << lValue << endl;
        cout << "sizeof(long double): " << sizeof(long double) << endl;

        return 0;
}
