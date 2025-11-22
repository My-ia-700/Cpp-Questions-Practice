#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << " The Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
}
bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int target = 5;
    printArr(arr, size);
    bool ans = linearSearch(arr, size, target);
    if (ans == 1)
    {
        cout << " Target is found " << endl;
    }
    else
    {
        cout << " Target is not found " << endl;
    }
    return 0;
}