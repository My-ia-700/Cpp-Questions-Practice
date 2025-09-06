// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 4;

//     //1
//     //12
//     //1 3
//     //1234
//     for (int row = 1; row <= n; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             if (col == 1 || col == row || row == n)
//             {
//                 cout << col;
//             }
//             else
//             {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std ;
int main(){
    int n =4;

    //1
    //1 2
    //1  3
    //1 2 3 4
    for(int row=1;row<=n;row++){
        for(int col=1;col<=row ;col++){
            if(col==1 || col==row || row == n){
                cout << col << " " ;
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}