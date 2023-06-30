#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    while (number1 <= number2) {
        cout << number1 << endl;
        number1++;
    }
}
