#include <iostream>
using namespace std;

bool primeNum(int n)
{
    for (int i = 2; i < n; i++) // [ 2 , 3 , 4 ...... n-1] ,
                                // koi bhi N ko perfectly divide nhi kr paya hoga
    {
        if (n % i == 0)
        {
            // remainder = 0 -> perflectly divisible
            // not a prime number
            return false;
        }
    }
    return true; // it is , n is prime number
}
int main()
{
    int checkPrime = primeNum(5);
    if (checkPrime)
    { // true for checkPrime
        cout << "It is a prime number" << endl;
    }
    else
    {
        cout << "It is not a prime number" << endl;
    }
}