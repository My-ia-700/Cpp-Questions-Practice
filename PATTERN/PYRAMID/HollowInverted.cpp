// #include<iostream>
// using namespace std ;
//  int main(){
//     int n;
//     cin >> n ;
//     // for(int row=0;row<n;row++){
//     //     for(int col = 0 ; col < row ; col ++){
//     //         cout << " ";
//     //     } 
//     //     for(int col = 0 ; col <1 ; col++){
//     //         cout << "* ";
//     //     }
//     //     for(int col = 0 ; col < (2*n) - (2*row) - 1 ; col ++){
//     //         cout << " " ;
//     //     }
//     //     for(int col = 0 ; col <1 ; col++){
//     //         cout << "* ";
//     //     }
//     //     cout << endl ;



        // 

//         #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     for (int row = 0; row < n; row++) {
//         // spaces before stars
//         for (int col = 0; col < row; col++) {
//             cout << " ";
//         }

//         // stars and hollow part
//         for (int col = 0; col < 2 * (n - row) - 1; col++) {
//             if (col == 0 || col == 2 * (n - row) - 2) {
//                 cout << "*";  // first and last star
//             } else {
//                 cout << " ";  // hollow space
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row; col++)
            {
                cout << " ";
            }

            // stars
            int totalCol = n - row;
            for (int col = 0; col < totalCol; col++)
            {
                // if first and last col
                if (col == 0 || col == totalCol - 1)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
