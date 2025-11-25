#include <iostream>
using namespace std;
int getUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // use XOR  
    }
    return ans;
}
int main()
{
    int arr[7] = {2, 5, 7, 5, 2, 10, 7};
    int size = 7;
    int finalAns = getUnique(arr, size);
    cout << " Unique element is " << finalAns << endl;
    return 0;
}