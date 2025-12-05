#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};
    cout << arr <<endl ; // address at which oth element stored
    cout << *arr <<endl ; // point at the element stored at arr address -> 1
    // cout << **arr <<endl ;
    cout << &arr <<endl ; // starting address of an array
    return 0;
}