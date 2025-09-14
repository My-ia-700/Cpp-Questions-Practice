#include <iostream>
using namespace std;

int rectangle_area(int n1, int n2)
{
    int store_area = (n1 * n2);
    return store_area;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int area = rectangle_area(num1, num2);
    cout << " The area of rectangle is " << area << endl;
    return 0;
}