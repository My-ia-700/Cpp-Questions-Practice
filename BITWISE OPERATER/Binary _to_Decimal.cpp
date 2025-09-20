#include <iostream>
#include <cmath>
using namespace std;
// method 1
// 101 = 2^2 * 1 + 2^1 * 0 +2^0 * 1 = 5
int binaryTodecimal(int num)
{
    int decimal = 0, power = 0;
    while (num > 0)
    {
        int last_bit = num % 10;                      // 101%10=1 , 10%10=0 , 1%10=1
        decimal = decimal + pow(2, power) * last_bit; // 0+2^0*1=1 , 1+2^1*0=1 , 1+2^2*1=5
        power++;                                      // 0->1, 1->2 , 2->3
        num /= 10;                                    // 101/10=10 , 10/10=1 , 1/10=0
    }
    return decimal;
}
int main()
{
    int n;
    cout << " Enter a Binary Number : ";
    cin >> n;
    int binary_to_deciaml = binaryTodecimal(n);
    cout << " The Decimal repreatation of " << n << " is " << binary_to_deciaml;
    return 0;
}
// method 2
// int binary_to_deca(int num)
// {
//     int decimal = 0, base = 1, rem;
//     while (num > 0)
//     {
//         rem = num % 10;        // 101 % 10 = 1 , 10%10=0 , 1%10=1
//         decimal += rem * base; // 0+1*1 = 1 , 1+0*2=1 , {1+1*4=5}// print hoga
//         base *= 2;             // 1*2=2 , 2*2=4 , 4*2=8
//         num /= 10;             // 101/10=10,10/10=1 , 1/10=0
//     }
//     return decimal;
// }
// int main()
// {
//     int n;
//     cout << "Enter a binary no. : ";
//     cin >> n;
//     int binaryTodeca = binary_to_deca(n);
//     cout << "The Decimal representation of " << n << " is " << binaryTodeca;
// }