#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum: "  << (num1+num2+num3)
    << "Average: " << (num1+num2+num3)/3
    << "Product: " << num1*num2*num3;
     if (num1 > num2 && num1>num3){
        cout << "Largest number: " << num1;

     }
     else if (num2 > num1 && num2>num3){
        cout << "Largest number: " << num2;

     }
     else
        cout << "Largest number: " << num3;
     if (num1 < num2 && num1<num3){
        cout << "Smallest number: " << num1;

     }
     else if (num2 < num1 && num2<num3){
        cout << "Smallest number: " << num2;

     }
     else
        cout << "Smallest number: " << num3;
}
