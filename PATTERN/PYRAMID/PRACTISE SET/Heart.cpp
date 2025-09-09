//        * * *   * * *
//    * * * * *   * * * * *
//* * * * * * * * * * * * * * *
//  * * * * * * * * * * * * *
//    * * * * * * * * * * *
//      * * * * * * * * *
//        * * * * * * *
//          * * * * *
//            * * *
//              *
#include <iostream>
using namespace std;
int main()
{
    int n = 13;
    // upper
    for (int row = n / 2; row < n; row = row + 2)
    {
        // space
        for (int col = 0; col < n - row; col = col + 2)
        {
            cout << "  ";
        }
        // stars
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        // middle space
        for (int col = 0; col < n - row; col = col + 1)
        {
            cout << "  ";
        }
        // right stars
        for (int col = 0; col < row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (int row = 0; row <n; row++)
    {
        // spaces before stars
        for (int col = 0; col < row; col++)
        {
            cout << "  ";
        }
        // stars
        for (int col = 0; col < (n * 2) - (row * 2) + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}