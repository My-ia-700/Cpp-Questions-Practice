#include <iostream>
#include <cmath>
using namespace std;

// (751)Octal= 7*8^2 + 5*8^1 + 1*8^0 = (549)Decimal aise octal values ke liye save 
// but for (14)Octal = (16)correct = (12)decimal de rha h (wrong)
int octalTodecimal(int num)
{
    int decimal = 0, power = 0;
    while (num > 0)
    {
        int octal = num % 10;                        
        decimal = decimal + pow(8, power) * octal; 
        power++;                                   
        num /= 10;                                
    }
    return decimal;
}
int main()
{
    int n;
    cout << " Enter a Octal number : ";
    cin >> n;
    int octal = octalTodecimal(n);
    cout << " The deciaml representation of " << n << " is " << octal;
    return 0;
}
