#include <iostream>
#include <cmath>
using namespace std;

void calculate_power(int n1)
{
    for (int i = 1; i <= n1; i++)
    {

        // pow() double value freturn krta h , int nhi
        // so in int case , to floating point rounding error ki vajah se
        // thodi km value de skta h

        cout << (int)round(pow(i, 2)) << endl;
        // round -> duble value round off
    }
    // pow(5,2) = 24.999999999997 =~ 24 (int)
}
int main()
{
    int num1;
    cin >> num1;
    calculate_power(num1);
}