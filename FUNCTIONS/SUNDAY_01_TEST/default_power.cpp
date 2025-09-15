#include <iostream>
#include <cmath>
using namespace std;

void calculate_power(int base, int exponent = 3) // default power setup here
{
    for (int i = 1; i <= base; i++)
    {

        // pow() double value freturn krta h , int nhi
        // so in int case , to floating point rounding error ki vajah se
        // thodi km value de skta h

        cout << (int)round(pow(i, exponent)) << endl; // (4,3) : 1 8 27 64
        // round -> duble value round off
    }
    // pow(5,2) = 24.999999999997 =~ 24 (int)
}
int main()
{
    int exp;
    cin >> exp;
    calculate_power(exp);
}