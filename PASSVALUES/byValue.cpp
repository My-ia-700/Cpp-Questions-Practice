#include <iostream>
using namespace std;
int increamentBy1(int n) // another n with different address 
{
    n = n + 1;
    return n;
}
int main()
{
    int n = 3; // original n 
    n = increamentBy1(n);
    cout << " n : " << n << endl; // without return ya return store se original n me koi updation nhi hogi 
    return 0;
}