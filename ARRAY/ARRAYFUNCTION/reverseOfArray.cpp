#include <iostream>
using namespace std;

// arr = {1,2,3,4,5} -> {5,4,3,2,1}
void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    // for(int left = 0 ,right = size - 1 ; left<=right ; left++,right-- ){
    //     swap(arr[left],arr[right])
    // }
    while (left <= right)
    { // condition for both even and odd no. of array
        swap(arr[left], arr[right]); // +,-,XOR,tempary variable se bhi kr skte hain 
        left++;
        right--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5};
    int size = 5;
    reverseArray(arr, size);
    return 0;
}