#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int target = 7;
    bool flag = 0; // initially set the target is not found 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << " target is found " << endl;
    }
    else
    {
        cout << " target is not found " << endl;
    }
    return 0;
}