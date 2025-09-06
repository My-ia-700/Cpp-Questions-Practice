#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row <= 4; row++)
    {
        for (int col = 0; col <= 6; col++)
        {
            // if (row == 0 || row == 4)
            if (row == 0 || row == 4 || col == 0 || col == 6)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}