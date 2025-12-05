#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int *ptr = &a;
    // cout << &a << endl;
    // cout << ptr << endl;
 
    // float b = 100.6;
    // float *ptr2 = &b;
    // cout << &b << endl;
    // cout << ptr2 << endl;

    // updatation in value of pointer
    int a = 5, b = 6;
    int *ptr = &a;
    cout << *ptr << endl;
    ptr = &b;
    cout << *ptr << endl;
    // // pointer to pointer 
    // int** ptr3 = &ptr;
    // cout << ptr3<<endl ;
    // cout << *ptr3<<endl ;
    // cout << **ptr3<<endl ;

    //NULL pointer
    // int** ptr4 ;
    // cout << *ptr4 ;
    int** ptr4 =NULL ;
    cout << ptr4 ; // address->0
    
    return 0;
}