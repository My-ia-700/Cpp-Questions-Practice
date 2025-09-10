#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter two Numbers : " << endl;
    cin >> a >> b;
    int op;
    cout << " What operation you want to do : " << endl;
    cin >> op ;
    float ans = 0;

    // op = 0-> add , op = 1-> sub , op = 2 -> *, op = 3 -> / , invalid operation

    switch (op)
    {
    case 0:
        cout << "Add Case" << endl;
        ans = a + b;
        break;
    case 1:
        cout << "sub Case" << endl;
        ans = a - b;
        break;
    case 2:
        cout << "Multiplication Case" << endl;
        ans = a * b;
        break;
    case 3:
        cout << "Division Case" << endl;
        ans = a / b;
        break;
    default:
        cout << "Invalid Operation"<< endl;
        return 0;
    }
    cout << "Your answer is : " << ans << endl;

    return 0;
}