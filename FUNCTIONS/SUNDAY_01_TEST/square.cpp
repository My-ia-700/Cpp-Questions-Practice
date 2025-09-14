#include <iostream>
using namespace std;

int square(int n1)
{
    return (n1 * n1);
}
int main()
{
    int n;
    cin >> n;
    int squared_value = square(n);
    cout << squared_value << endl;
    return 0;
}