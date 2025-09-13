#include <iostream>
using namespace std ;

int main(){

    // left shift -> a * 2^n 
    int a = 5 ;
    cout << (a<<0) << endl ;
    cout << (a<<1) << endl ; // 5 * 2^1 = 10
    cout << (a<<2) << endl ; // 5 * 2^2 = 20
    cout << (a<<3) << endl ; // 5 * 2^3 = 40

    unsigned int b = -5 ; // 11....011 -> 1....0110 = -10
    cout << (b<<1) << endl ;

    int d = -5 ;
    cout << (d<<1) << endl ;
    int c = 5 ; //00...101
    // cout << (c<<(-1)) << endl ; // undefined behavior
    cout << (c<<32) << endl ; // 0 <= n <= no.of bits of type
    
    // right shift -> e / 2^n

    int e = 5;
    cout << ( e>>0) << endl ; // 5 /2^0 = 5
    cout << ( e>>1) << endl ; // 5 /2^1 = 2
    cout << ( e>>2) << endl ; // 5 /2^2 = 1
    cout << ( e>>3) << endl ; // 5 /2^3 = 0

    int f = -5 ;
    cout <<(f>>1)<<endl ;

    unsigned int g = -5 ;
    cout <<(g>>1)<<endl ;

    int h = 10 ;
    cout <<(h>>-1)<<endl ; // undefinted behaviour
    cout <<(h<<-1)<<endl ;

    int i ;
    cout <<(i>>1)<<endl ; // garbage values
    cout <<(i<<1)<<endl ;
    return 0;
}