#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    // 1
    // 2*2
    // 3*3*3
    // 4*4*4*4
    //->

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < (2 * row) + 1; col++)
        {
            if (col % 2 == 0)
            {
                cout << row + 1;
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    for (int row = n - 2; row >= 0; row--)   // n-2 se start kyunki middle line already print ho chuki hai
{
    for (int col = 0; col < (2 * row) + 1; col++)
    {
        if (col % 2 == 0)
        {
            cout << row + 1;   // ✔ same numbering style as upper half
        }
        else
        {
            cout << "*";
        }
    }
    cout << endl;
}

}

