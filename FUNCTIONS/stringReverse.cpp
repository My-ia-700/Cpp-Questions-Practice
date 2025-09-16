#include <iostream>
#include <string>    // for string
#include <algorithm> // for reverse
using namespace std;

// function defination
void reverseString(string &statement)
{
    reverse(statement.begin(), statement.end()); 
}

int main()
{
    string text = " C++ functions ";
    cout << " Original string : " << text << endl;
    // function call
    reverseString(text);
    cout << "Reversed string : " << text << endl;
    return 0;
}