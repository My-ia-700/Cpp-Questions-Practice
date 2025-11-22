#include <iostream>
using namespace std;
void extremPrint(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (left == right)
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
    // in case even number hain
    // while (left <= right)
    // {
    //     cout << arr[left] << " ";
    //     cout << arr[right] << " ";
    //     left++;
    //     right--;
    // }
}
int main()
{
    int arr[7] = {1, 5, 8, 22, 9, 7, 4};
    int size = 7;
    extremPrint(arr, size);
    return 0;
}