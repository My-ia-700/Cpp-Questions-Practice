#include <iostream> // also use INT32_MIN &INT32_MAX , also for 16 byte
#include <limits.h> // for INT_MIN & INT_MAX
using namespace std;
void minTerm(int arr[], int size)
{
    int minAns = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        // (I)
        if (minAns > arr[i])
        {
            minAns = arr[i];
        }
        cout << minAns << " "; 
        // (II)
        // minAns = min(minAns, arr[i]);
    }
    cout << "The Minimum Term is " << minAns << endl;
}
int main()
{
    int arr[5] = {15, 8, 6, 9,1};
    int size = 5;
    minTerm(arr, size);
    return 0;
}