#include <iostream>
using namespace std;

// arr[8] = { 1,1,0,0,0,1,0,1  }

void countZeroOne(int arr[], int size)
{
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            oneCount++;
        }

        // else if (arr[i] == 0)
        // {
        //     zeroes++;
        // }
    }
    int zeroCount = size - oneCount ;

    cout << "Onces : " << oneCount << endl;
    cout << "Zeeroes : " << zeroCount << endl;
}
int main()
{
    int arr[8] = {1, 0, 1, 1, 0, 1, 0, 1};
    int size = 8;
    countZeroOne(arr, size);
    return 0 ;
}