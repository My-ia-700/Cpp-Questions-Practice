#include <iostream>
using namespace std;
void cartisainProduct(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <size/2; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << ")";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3] = {10, 20, 30};
    int size = 3;
    cartisainProduct(arr, size);
    return 0;
}