#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
   int num1;
   int num2;
   cin >> num1;
   num2 = num1%2;
   if (num2){
    cout << "Odd";
    //The modulus symbol means remainder so if the num2 exists, num1 is odd.
   } else {
   cout << "Even";
   }

}
