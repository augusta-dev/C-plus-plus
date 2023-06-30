#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Please Input three numbers"
    cin >> num1 >> num2 >> num3;
    cout << "Numbers: " << num1 << " , " << num2 << " , " << num3 << endl;
    cout << "Sum" << num1+num2+num3 << endl;
    cout << "Average" << (num1+num2+num3)/2 << endl;
    cout << "Product" << num1*num2*num3 << endl;

     if (num1>num2 || num1>num3) {
        cout << "Largest: " << num1;
     }
     else if (num2>num1 || num2>num3) {
        cout << "Largest: " << num2;
     }
     else if (num3>num1 || num3>num2) {
        cout << "Largest: " << num3;
     }


}
