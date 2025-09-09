#include<iostream>
using namespace std ;
 int main(){

    int a=5; // 00000101
    int b=10;// 00001010 
 
    cout << (a | b ) << endl ;  // 00001111 -> 15
    cout << (a^b) << endl;  // same -> 0  ,  diff. -> 1 // 111110000

    int num =1;
    cout << ~ num << endl ;
    cout << (~num) << endl ;
    cout<< ~(num) << endl ;
    return  0; 
 }