#include <iostream>
#include <cmath> // for M_PI
using namespace std;

// area of rectangle
int rectangle_area(int lenght, int breath)
{
    int store_area = (lenght * breath);
    return store_area;
}
// area of circle
double circle_area(double rad)
{
    int store_circle_area = M_PI * rad * rad; // M_PI = 3.14159....
    return store_circle_area;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    double r = 2;
    int area = rectangle_area(num1, num2);
    double circleArea = circle_area(r);
    cout << " The area of rectangle is " << area << endl;
    cout << " The area of circle is " << circleArea << endl;
    return 0;
}