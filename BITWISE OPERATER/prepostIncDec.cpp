#include<iostream>
using namespace std ;

int main(){
    int a=5;
    // decreament 
    cout <<(--a)*10 << endl ;
    cout <<(a) <<endl ;
    int b = 5;
    cout << (b--)*10 << endl ;
    cout <<(b) << endl ;

    // increament
    int c = 10 ;
    // cout << (++c)<<endl;
    // // c -> 22
    // cout << c++ << endl ; // c-> 22 (use) then increase -> c = 23 
    // //verify -> increment happen or not 
    // cout << c << endl ;

    cout <<(++c)*(c++)<<endl ;
    // 10 ->11 11->12 = 11*11=121 
}