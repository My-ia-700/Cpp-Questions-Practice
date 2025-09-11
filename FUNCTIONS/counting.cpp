#include <iostream>
using namespace std;

void printCounting(int n )
{
    // int n;
    // cin >> n;
    cout <<" The counting 1 to upto " << n << endl ;
    for (int i = 1; i <= n; i++)
    {
        cout << i <<" ";
    }
}
int main()
{
    printCounting(15); 
    return 0;
}