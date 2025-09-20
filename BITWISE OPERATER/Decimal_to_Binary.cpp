#include <iostream>
#include <cmath>
using namespace std;
// bit method

// int dec_to_binary(int num)
// {
//     int binaryNo = 0;
//     int i = 0;
//     while (num > 0)
//     {
//         int bit = num % 2 ; // 4%2=0 , 2%2=0 , 1%2=1
//         binaryNo = bit * (int)round(pow(10, i++)) + binaryNo; // 0+0, 0+0, 1*100+0=100
//         num = num / 2; // 4/2 = 2 , 2/2 =1 , 1/2=0->stop
//     }
//     return binaryNo;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int reversed = dec_to_binary(n);
//     cout << "reversed : " << reversed << endl;
//     return 0;
// }

// division method
int decimal_to_binary(int num)
{
    int bit, binary = 0;
    while (num > 0)
    {
        bit = num % 2;
        binary = binary * 10 + bit;
        num = num / 2;
    }
    return binary;
}

int print_correct_format(int num)
{
    int digit, rev = 0;
    while (num > 0)
    {
        digit = num % 10;       // 101 %10 = 1 , 10 % 10 = 0 , 1%10 = 1
        rev = rev * 10 + digit; // 0*10+1=1 , 1*10+0=10 ,10*10+1=1001
        num /= 10;              // 101 /10 =10 , 10/10=1 , 1/1=1
    }
    return rev;
}
int main()
{
    int n;
    cout << "Enter the Deciaml no. : ";
    cin >> n;
    int Bit = decimal_to_binary(n);
    int reversed = print_correct_format(Bit);
    cout << "In Binary : " << reversed << endl;
    return 0;
}