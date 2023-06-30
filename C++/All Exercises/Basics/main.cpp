#include <iostream>
using namespace std;

int main() {
   int numerator = 1;
   int denominator = 2;
   double decimal = static_cast<double>(numerator) / denominator;
   //use static cast double to convert the number to float point arithmetic.
   cout << "The decimal representation of " << numerator << "/" << denominator << " is: " << decimal << endl;
   return 0;
}
