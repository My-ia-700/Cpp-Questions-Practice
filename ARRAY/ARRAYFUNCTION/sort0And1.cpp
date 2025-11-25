#include <iostream>
using namespace std;
void countZeroes(int arr[], int n)
{
    int zeroes = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zeroes++;
        }
    }
    int once = n - zeroes;
    cout << "0's : " << zeroes << endl;
    cout << "1's : " << once << endl;
    // place 0
    // int i;
    // for (i = 0; i < zeroes; i++)
    // {
    //     arr[i] = 0;
    // }
    // // place 1
    // for (int j = i; j < n; j++)
    // {
    //     arr[j] = 1;
    // }
    // II way
    int index = 0;
    while (zeroes--)
    {
        arr[index] = 0;
        index++;
    }
    while (once--)
    {
        arr[index] = 1;
        index++;
    }
}

int main()
{
    int arr[7] = {0, 1, 0, 0, 0, 1, 0};
    int n = 7;
    countZeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}