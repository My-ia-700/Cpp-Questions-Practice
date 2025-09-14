#include <iostream>
using namespace std;

int celsius_to_fahrenheit(int C)
{
    int F = (C * 9 / 5) + 32;
    return F;
}
int main()
{
    int num1;
    cin >> num1;
    int fahrenheit_temp = celsius_to_fahrenheit(num1);
    cout << fahrenheit_temp << endl;
}