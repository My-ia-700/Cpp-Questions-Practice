#include<iostream>
using namespace std ;
 
int main(){

    //Datatype

    int num; // declaration
    num = 2 ; // initialisation
    cout << num << endl ;  // print 
    cout << sizeof(num) << endl ; // 4 byte

    int num1 ; // found always diff. garbage value
    cout << num1 << endl ; 
    cout << sizeof(num1) << endl ; //4 byte


    float num2 = 1.23 ;
    cout << num2 << endl ; 
    cout << sizeof(num2) << endl ; // 1 byte

    char ch = 'A' ;
    cout << ch << endl ; 
    cout << sizeof(ch) << endl ; //8 byte

    long num3 = 2356 ;
    cout << num3 << endl ;
    cout << sizeof(num) << endl ; // 4/8 byte

}