#include<iostream>
using namespace std ;
int main ()
{
    int arr[5];
    int n = 5 ;
    int sum = 0 ;
    for( int i = 0;i <n ; i++){
        cout << " Enter the index "<< i << " value :  " ;
        cin >> arr[i]; 
        // cout << endl ;
    }
    for ( int i = 0; i < n ; i++){
        sum = sum + arr[i];
    }
    cout << "The sum of the values of an array = "<< sum << endl ;
    return 0 ;
}