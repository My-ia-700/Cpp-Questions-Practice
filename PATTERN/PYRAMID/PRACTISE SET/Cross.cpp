// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *
// #include <iostream>
// using namespace std;
// int main()
// {
//     // int num ;
//     // cin >> num ;
//     // int n = num/2;
//     int n=4;

//     // upper part 

//     for (int row = 0; row < n; row++)
//     {
//         for(int col=0;col<row;col++){
//                 cout << " ";
//             }
//         for (int col = 0; col < n-row; col++)
//         {
//             // cout << "* ";
//             if (col == 0 || col == n-row -1 )
//             {
//                 cout << "* ";
//             }
//             else
//             {
//                 cout << "  ";
//             }
//         }
//         cout << endl;
//     }
//     // down part 

//     for (int row = 0; row < n; row++)
//     {
//         for(int col=0;col<n-row-1;col++){
//                 cout << " ";
//             }
//         for (int col =0;col<(2*n)-(2*(n-row-1));col++)
//         {
//             // cout << "* ";
//             if (col == 0 || col == (2*n)-(2*(n-row-1))-1 )
//             {
//                 cout << "*";
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

// 2nd way 

#include<iostream>
using namespace std ;
int main(){
    int n = 5 ;
    // upper section
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout << " ";
        }
        for (int col = 0; col < n-row; col++)
        {
            // cout << "* ";
            if (col == 0 || col == n-row -1 )
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl ;
    }
    // lower part 
    for(int row=0;row<n;row++){
        for(int col = 0 ;col <n-row-1;col++){
            cout << " ";
        }
        for(int col = 0 ;col < row+1 ; col++){
            if(col == 0 || col == row +1 - 1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl ;
    }
    return 0 ;
}