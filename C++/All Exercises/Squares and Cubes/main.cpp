#include <iostream>

using namespace std;

int main()
{
    int num, num1, num2, num3, num4, num5;
    cout << "Enter the number: ";
    cin  >> num;
    num1 = num % 10;
    num2 = (num/10)%10;
    num3 = (num/100)%10;
    num4 = (num/1000)%10;
    num5 = (num/10000)%10;
    cout << "Digits" << " " << "Squares" << "  " << "Cubes" << endl;
    cout << num5 << " " << num5*num5 << " " << num5*num5*num5 << endl;
    cout << num4 << " " << num4*num4 << " " << num4*num4*num4 << endl;
    cout << num3 << " " << num3*num3 << " " << num3*num3*num3 << endl;
    cout << num2 << " " << num2*num2 << " " << num2*num2*num2 << endl;
    cout << num1 << " " << num1*num1 << " " << num1*num1*num1 << endl;



}
