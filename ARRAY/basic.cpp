#include <iostream>
using namespace std;
int main()
{
    // array creation
    // int a[4]; // 1 int = 4 byte
    // cout << a[-2] << endl ;
    // float num[4]; // 1 float = 4 byte
    // char ch[4]; // 1 char = 1 byte
    // long lnum[400]; // 1 long = 4 byte
    // short snum[40]; // 1 short = 2 byte

    // cout << "Array creation successfully"<< endl ;

    // // address of operator
    // int arr[4];
    // cout << " Base Address of arr -  " << &arr << endl ;
    // cout << " Base Address of arr -  "<< arr << endl ;
    // // size of operator
    // cout << sizeof(a) << endl ;
    // cout << sizeof(num) << endl ;
    // cout << sizeof(ch) << endl ;
    // cout << sizeof(lnum) << endl ;
    // cout << sizeof(snum) << endl ;
    // cout << sizeof(arr) << endl ;
    // cout << sizeof(&arr) << endl ;
    // int b[0]; // array size <=0;
    // cout << b << endl ;
    // array initialisation
    // int arr[5]= { 1,2,3,4,5};

    // cout << arr[-2]<< endl ;

    // int br[]={1,2,3,4,5};
    // int cr[5]= {1,2};

    // cout << cr[4]<< endl;

    // error
    // int drr[5] = {1,2,3,4,5,6};

    // taking array by looping
    int arr[5] = {1, 2, 3, 5, 4};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << " Enter the value of index " << i << " : ";
        cin >> arr[i];
        cout << endl;
    }
    // printing a array
    cout << " Printing a array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}