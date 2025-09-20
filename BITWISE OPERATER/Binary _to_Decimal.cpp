#include <iostream>
#include <cmath>
using namespace std;

// reverse
// int reverse_digit(int num)
// {
//     int bit, rev = 0;
//     while (num > 0)
//     {
//         bit = num % 10;
//         rev = rev * 10 + bit;
//         num /= 10;
//     }
//     return rev;
// }
// stright
// 101 = 2^2 * 1 + 2^1 * 0 +2^0 * 1 = 5
int binary_to_deca(int num)
{
    int decimal = 0, base = 1, rem ;
    while (num > 0)
    {
        rem = num % 10;
        decimal += rem * base;
        base *= 2;
        num /= 10;
    }
    return decimal;
}
int main()
{
    int n;
    cout << "Enter a binary no. : ";
    cin >> n;
    // int bits = reverse_digit(n);
    int binaryTodeca = binary_to_deca(n);
    cout << "The Decimal representation of " << n << " is " << binaryTodeca;
}