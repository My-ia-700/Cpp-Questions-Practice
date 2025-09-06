#include <iostream>
using namespace std;
int main()
{
    // for (int row = 5; row > 0; row--)
    // {
    //     for (int col = 0; col < row - 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}