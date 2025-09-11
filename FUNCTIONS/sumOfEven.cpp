#include<iostream>
using namespace std ;

void evenNumSum(int n){
    int sum = 0;
    for(int i =1;i<=n;i++){
        if(i%2==0){
            sum = sum + i ;
        }
    }
    cout << "The Sum of 1 to "<< n << " is : " << sum << endl ;
}
int main(){
    evenNumSum(10);
    return 0;
}