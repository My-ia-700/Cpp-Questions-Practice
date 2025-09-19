#include <iostream>
using namespace std;

void area(int r)
{
    int areaOfCircle = (3.14) * r * r;
    cout << " The area of circle is " << areaOfCircle << endl;
}
int main()
{
    area(5);
    return 0;
}