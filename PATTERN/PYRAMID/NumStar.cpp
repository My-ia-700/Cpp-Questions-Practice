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

    // 2nd way

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == row + 1 - 1)
            {
                cout << row + 1;
            }
            else
            {
                cout << row + 1 << "*";
            }
        }
        cout << endl;
    }

    // 1*1*1*1
    // 2*2*2
    // 3*3
    // 4
    //->
    // for(int row=0 ; row<n ;row++){
    //     for(int col=0;col<(2*n)-(2*row)-1;col++){
    //         if(col % 2 == 0){
    //             cout << row+1 ;
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     cout << endl ;
    // }
    return 0;
}