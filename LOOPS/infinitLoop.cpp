#include <iostream>
using namespace std;
int main()
{

   // for (int i = 0; i < 2; i--)
   // {
   //    cout << "sunnnnn" << endl; // ctrl + c = stop infinit loop 
   // }
   int i = 1;
   for (;;)
   {
      cout << "value of i : " << i << endl;
      if (i < 5)
      {
         cout << "sunnn"<< endl ;
         
      }
      else
      {
         break;
      }
      i = i + 1;
   }
   cout << " break exicuted";
}