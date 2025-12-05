#include<iostream>
using namespace std ;
void changeB(int &c){ // pass by reference by alias
    c = 6;
}
void changeA(int* ptr){ // pass by reference by pointers
    *ptr = 4;
}
int main()
{
    int a= 2;
    changeA(&a);
    int b=10;
    changeB(b);
    cout << a<< endl;
    cout << b<< endl;
    return 0;
}