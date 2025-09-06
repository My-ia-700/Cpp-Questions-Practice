#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n = a / 2;
    // upper outer loop
    for (int row = 0; row < n; row++)
    {
        // outer spaces
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << " ";
        }
        // innner stars
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row + 1 - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // down outer loop
    for (int row = 0; row < n; row++)
    {
        // outer space
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        // inner stars
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
