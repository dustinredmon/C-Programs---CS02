#include<iostream>

using namespace std;

int main() {
   int length = 0, first = 0, second = 1, next;

   cout << "Enter the number of terms you want to see in the Fibonacci sequence:" << endl;
   cin >> length;

   for (int i = 0 ; i < length ; i++ )
   {
      if ( i <= 1 )
         next = i;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }

   return 0;
}