#include <iostream>
using namespace std;
int main()
{
    cout << " Hello World " << endl;
    int num1 = 5, num2 = 6;
    int sum = num1 + num2;
    cout << " The sum is : " << sum << endl;
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < row - col; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
