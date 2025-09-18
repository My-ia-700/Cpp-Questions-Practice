#include <iostream>
using namespace std;

// reverse the digit
int reverseDigit(int num)
{
    int digit, rev = 0;
    while (num > 0)
    {
        digit = num % 10;       // 1234 % 10 = 4 -> for last digit
        rev = rev * 10 + digit; // 0 * 10 + 4 = 4 -> reverse -> main part
        num /= 10;              // num = num / 10 -> current value ko change krane ke liye
    }
    return rev;
}

// print the reversed number
void printDigit(int num) // num = rev = 4321
{
    int digit;
    while (num > 0)
    {
        digit = num % 10; // 4321 % 10 = 1
        cout << digit << endl;
        num /= 10; // 4321 /10 = 432
    }
}
int main()
{
    int n;
    cin >> n;
    int rev = reverseDigit(n); // rev = 4321
    printDigit(rev); 
    return 0;
}