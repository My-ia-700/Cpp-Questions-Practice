#include <iostream>
using namespace std;
int main()
{
    for (int row = 0; row < 5; row++)
    {
        char ch;
        for (int col = 0; col < row + 1; col++)
        {
            int num ;
            num = col + 1 ;
            ch = num + 'A' -1;
            cout << ch ;
        }
        for(char alpha=ch;alpha>'A'; alpha--){
            // alpha =alpha-1;
            cout << alpha ;
        }
            // 1 way
            //     if(col == 0){
            //         cout << " A " ;
            //     }
            //     else if(col== 1){
            //         cout << " B " ;
            //     }
            //     else if(col== 2){
            //         cout << " C " ;
            //     }
            //     else if(col== 3){
            //         cout << " D " ;
            //     }
            //     else if(col== 4){
            //         cout << " E " ;
            //     }
        // }
        cout << endl;
    }
    return 0;
}