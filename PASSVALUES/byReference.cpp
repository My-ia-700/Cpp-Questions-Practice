#include <iostream>
using namespace std;

void increamentBy1(int &b) // basically int &b = n -> reference variable
{
    b = b + 1; // changes also occur in original n also 
}
int main()
{
    int n; // original n 
    cin >> n;
    increamentBy1(n);
    cout << "n : " << n << endl;
    return 0;
}