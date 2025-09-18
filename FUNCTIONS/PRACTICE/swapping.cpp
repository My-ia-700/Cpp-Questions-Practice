#include <iostream>
using namespace std;

void swaped_number(int &num1, int &num2) // reference using -> real variable pe bhi changes dikhane ke liye
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << "Before swaping : " << n1 << " " << n2 << endl;
    swaped_number(n1, n2);
    cout << "After swaping : " << n1 << " " << n2;
    return 0;
}