#include<iostream>
using namespace std ;

void findSum(int n ){
    int sum = 0; 
    for(int i =1;i<=n ;i++){
        sum = sum + i;
    }
    cout << " The Sum of 1 to " << n << " numbers : " << sum << endl ;
}
int main (){

    findSum(5);
    return 0; 
}