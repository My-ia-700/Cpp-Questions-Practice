#include <iostream>
using namespace std;

void addTwoNum(int a, int b)
{
    int sum = a + b;
    cout << " Sum is : " << sum << endl;
}
int sumTwoNum(int c, int d)
{
    int add = c + d;
    return add;
}
int printSum(int a, int b)
{
    int Sum = a + b;
    return Sum;
}
int main()
{
    addTwoNum(4, 5);
    sumTwoNum(5, 9);
    cout << "Addition is : " << sumTwoNum(5, 9) << endl;
    int addition = printSum(6, 4);
    cout << "Sum is : " << addition << endl;
    return 0;
}