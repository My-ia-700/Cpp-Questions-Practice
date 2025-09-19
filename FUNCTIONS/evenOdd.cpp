#include <iostream>
using namespace std;

void identifyNum(int n)
{
    cout << " The Number is : " << n << endl;
    if (n % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
}
int main()
{
    identifyNum(5);
    return 0;
}