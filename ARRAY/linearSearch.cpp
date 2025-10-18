#include <iostream>
using namespace std;
void input(int num)
{
    int arr[num];
    int n = num;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The array : " ; 
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
}
void flag(int num)
{
    bool flag = 0;
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "target found ";
    }
    else
    {
        cout << "target not found ";
    }
}
int main()
{
    int n;
    cout << "Enter the lenght of an array : ";
    cin >> n;
    input(n);
    int target;
    cout << "Enter the target : ";
    cin >> target;
    flag(target);
}