#include<iostream>
using namespace std ;
 int main(){

   int a=5; // 00000101
   int b=10;// 00001010 
   
   cout << (a & b ) << endl ;
   cout << (a | b ) << endl ;  // 00001111 -> 15
   cout << (a^b) << endl;  // same -> 0  ,  diff. -> 1 // 111110000

   // in case of int 
   // int num =1;
   // cout << ~ num << endl ;
   // cout << (~num) << endl ;
   // cout<< ~(num) << endl ;

   // in case of bool 
   bool num = 1; // bool is implicitly promoted to int 
   cout << ~ num << endl ; 
   cout << (~num) << endl ; // they are equivalent . 
   cout<< ~(num) << endl ; // parantheses don't change anything
   
   int c =5; // 00.........101 
   int d = -5; // 11........011 -> 1's -> 2's = 11.....10 -> -2
   cout << (a^c) << endl ;
   cout << (a^b) << endl ;
   cout << (a^d) << endl ; 
   return  0; 
 } 