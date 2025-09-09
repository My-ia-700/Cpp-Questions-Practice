#include<iostream>
using namespace std ;
int main (){  
        // Inplicit Type Casting

    //  int -> float & float -> int 
    // int a = 10 ;
    // float b = 3.01 ;
    // float c = a+b ;
    // cout << " In Float Case : " << c << endl ;
    // int d = a+b ;
    // cout << " In Int Case : " << d << endl ;

    // // char -> int
    // char ch = 'A' ;
    // int e = ch +1 ;
    // cout << " In Char to Int  Case : " << e << endl ;
    // char f = ch +1 ;
    // cout << " In Int Char to  Case : " << f << endl ; 

        // Explicit Type Casting

    int a = 10 ;
    int b = 3.01 ;
    float c = a+ (float)b ;
    cout << " In Float Case : " << c << endl ;
    int d = a+b ;
    cout << " In Int Case : " << d << endl ;

    // double to int 
    double pi = 3.14159265 ;
    int intPi = (int) pi ;
    cout << "In Case Double to Int : " << intPi << endl ; 

    // float to char
    char ch = 65.310 ;
    float floatIng = ch ;
    cout << "In Case Char to Float : " << floatIng << endl ;

    float gg = 65.310 ;
    char ggg = (char)gg ;
    cout << "In Case Float to char : " << ggg << endl ;
    
    return 0;
}