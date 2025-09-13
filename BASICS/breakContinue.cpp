#include <iostream>
using namespace std;

int main()
{
    // break case

    for (int i = 0; i < 5; i++)
    {
        cout << "hello jee" << endl;
        break;
    }

    for (int j = 0; j < 5; j++)
    {
        if (j == 2)
        {
            cout << "hello jee" << endl;
            break;
        }
    }

    // continue
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
        {
            cout << "Hello 17" << endl;
            continue;
        }
        // cout << "Hello 17" << endl;
        // continue;
        cout << "Hello 27" << endl;
    }
}