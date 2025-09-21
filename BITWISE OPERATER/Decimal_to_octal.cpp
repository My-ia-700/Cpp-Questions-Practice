#include <iostream>
#include <cmath>
using namespace std;
// 5 = 5%8=5 --> 5 , 10= 10%8=(2), 10/8=1->1%8=(1) ---> 12
int remainder(int num)
{
    int rem, collect = 0;
    while (num > 0)
    {
        rem = num % 8;                // 14%8 =6 ,1%8=1
        collect = collect * 10 + rem; // 0*10+6=6 , 6*10+1=61
        num /= 8;                     // 14/8=1 , 1/8=0
    }
    return collect;
}
int deciamlToOctal(int num) // num = 61
{
    int digit, rev = 0;
    while (num > 0)
    {
        digit = num % 10;       // 61%10=1 , 6%10=6
        rev = rev * 10 + digit; // 0*10+1=1 , 1*10+6=16
        num /= 10;              // 61/10=6 , 6/10=0
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter a Decimal number : ";
    cin >> n;
    int oct = remainder(n);
    int octal = deciamlToOctal(oct);
    cout << "The Octal representation of " << n << " is " << octal;
    return 0;
}