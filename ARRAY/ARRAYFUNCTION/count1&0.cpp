#include <iostream>
using namespace std;
void printArr(int arr[], int size)
{
    cout << " Array is ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl ;
}
void countOne(int arr[], int size)
{
    int one = 0;
    // int zero = 0 ;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            one++;
        }
        // if (arr[i] == 0)
        // {
        //     zero++;
        // }
    }
    int zero = size-one ;
    cout << " The no. of Once : " << one << endl ;
    cout << " The no. of Zeros : " << zero << endl ;
}
int main()
{
    int arr[7] = {1, 0, 0, 1, 0, 1, 1};
    int size = 7;
    printArr(arr, size);
    countOne(arr,size);
    return 0;
}