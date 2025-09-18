#include <iostream>
using namespace std;

int add_numbers(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int main()
{
    int result = add_numbers(3, 2);
    cout << result << endl;
    return 0;
}