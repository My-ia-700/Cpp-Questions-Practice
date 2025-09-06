// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int num = 1 ;
    for (int row = 0; row < n; row = row + 1)
    {
        for (int col = 0; col < row + 1; col = col + 1)
        {

            cout << num << " ";
            num++;

        }
        cout << endl;
    }
    return 0;
}