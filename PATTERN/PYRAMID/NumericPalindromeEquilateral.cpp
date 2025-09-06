//          1
//        1 2 1
//      1 2 3 2 1
//    1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row - 1; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        for (int col = row + 1; col > 1;)
        {
            col = col - 1;
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}