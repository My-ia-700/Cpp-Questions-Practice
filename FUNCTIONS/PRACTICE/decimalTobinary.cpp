#include <iostream>
#include <cmath>
using namespace std;

// division method -> error = triling zeros lost ho ja rhi hain : 8 = 0001 = 1.
// Use strings 
// by collect remainder
// int decimalTobinary(int num)
// {
//     int bit, binaryNo = 0;
//     while (num > 0)
//     {
//         bit = num % 2;                  // 5 % 2 = 1 , 2%2 =0 , 1%2=1
//         binaryNo = binaryNo * 10 + bit; // 0*10+1=1, 1*10+0=10 , 10*10+1=101
//         num /= 2;                       // 5/2=2 ,2/2=1 , 1/2=0
//     }
//     return binaryNo;
// }
// print reverse and found correct binary no.
// int returnReverse(int num)
// {
//     int digit, rev = 0;
//     while (num > 0)
//     {
//         digit = num % 10; // 01 % 10 =1 
//         rev = rev * 10 + digit; //0+1=1
//         num /= 10; //1/10=0
//     }
//     return rev;
// }
// int main()
// {
//     int n;
//     cout << " Enter a Decimal Number : ";
//     cin >> n;
//     int Bit = decimalTobinary(n);
//     int binaryNo = returnReverse(Bit);
//     cout << " The Binary represention of " << n << " is " << binaryNo;
//     return 0;
// }

// bitwise method
int bits(int num)
{
    int digit, binaryNo = 0, i = 0;
    while (num > 0)
    {
        digit = num % 2;
        digit = num * (int)round(pow(10, i++)) + binaryNo;
        num /= 2;
    }
    return digit;
}
int main()
{
    int n;
    cout << " Enter a Decimal Number : ";
    cin >> n;
    int Bit = bits(n);
    cout << " The Binary represention of " << n << " is " << Bit;
    return 0;
}