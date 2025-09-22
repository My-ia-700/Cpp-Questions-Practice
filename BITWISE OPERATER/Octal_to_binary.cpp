// #include <iostream>
// #include <cmath>
// using namespace std;

// // (754)Octal = 111(7) 101(5) 100(4)
// int binary(int num)
// {
//     int binary, rem = 0;
//     while (num > 0)
//     {
//         binary = num % 2;
//         rem = rem * 10 + binary;
//         num /= 2;
//     }
//     return rem;
// }
// int reversePrint(int num)
// {
//     int binary, rev = 0;
//     while (num > 0)
//     {
//         binary = num % 10;
//         rev = rev * 10 + binary;
//         num /= 10;
//     }
//     return rev;
// }
// int main()
// {
//     int n;
//     cout << "Enter a Octal Number : ";
//     cin >> n;
//     int binaryNumber = binary(n);
//     int reverse = reversePrint(binaryNumber);
//     cout << "The Binary representation of Octal Number " << n << " is " << reverse;
//     return 0;
// }
#include <iostream>
using namespace std;

// reverse the digit
int reverseDigit(int num)
{
    int digit, rev = 0;
    while (num > 0)
    {
        digit = num % 10;       //
        rev = rev * 10 + digit; //
        num /= 10;              //
    }
    return rev;
}

// print the reversed number
int printDigit(int num) // num = rev = 457
{
    int rev = 0;
    while (num > 0)
    {
        int digit = num % 10; //
        int bit = 0; 
        int place = 1;
        while (digit > 0)
        {
            bit = bit + (digit%2)*place; 
            digit /= 2 ; // 
            place *= 10 ; //
        }
        rev = rev * 1000 + bit; // 
        num /= 10; //
    }
    return rev;
}
int main()
{
    int n;
    cin >> n;
    int rev = reverseDigit(n); // rev = 
    int binary = printDigit(rev);
    cout << binary;
    return 0;
}
