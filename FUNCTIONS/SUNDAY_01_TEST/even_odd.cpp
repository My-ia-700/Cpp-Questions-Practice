#include <iostream>
using namespace std;

bool is_even(int n1)
{ // bool -> for condition check kr rhe ahin
    if (n1 % 2 == 0)
        return true;
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    bool num = is_even(n);
    cout << boolalpha << num << endl; // use boolaplha = 1 -> true 0 -> false  me print krega
    return 0;
}