#include <iostream>
using namespace std;

// void maxNum(int a, int b, int c){
//     if(a>b){
//         if(a>c){
//             cout << "a is max of three numbers : " << a <<endl;
//         }
//         else{
//             cout << "c is max of three numbers : " << c <<endl;
//         }
//     }
//     else if(b>c){
//         cout << "b is max of three numbers : " << b <<endl;
//     }
//     else{
//         cout << "c is max of three numbers : " << c <<endl;
//     }
// }
int maxNum(int n1, int n2, int n3)
{
    // Using inbuilt function / predefinte function -> max
    int ans1 = max(n1, n2);
    int final = max(ans1, n3);
    // cout << "Final Ans is : "<< final << endl ;
    return final;
}
int main()
{
    int maximum = maxNum(5, 6, 8);
    cout << "Final Ans is : " << maximum << endl;
    return 0;
}