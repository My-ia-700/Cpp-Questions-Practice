#include <iostream>
using namespace std;
// 5 fact = 5*4*3*2*1
int factorial(int num1)
{
    int fact = 1;
    for (int i = 1; i <= num1; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n1;
    cout << " Enter a number : ";
    cin >> n1;
    if (n1 >= 0)
    {
        int factorialOfNum = factorial(n1);
        cout << " The factorial of " << n1 << " is " << factorialOfNum << endl;
    }
    else
    {
        cout << " Not a factorial valaue ";
    }
    return 0;
}