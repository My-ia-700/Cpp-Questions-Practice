#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    int arr[4] = {1, 5, 6};
    int size = 3;
    int target = 5;
    bool ans = linearSearch(arr, size, target);
    if (ans == true)
    {
        cout << " Target Found" << endl;
    }
    else
    {
        cout << "Target not found" << endl;
    }

    //    printArray(arr, size);
    return 0;
}