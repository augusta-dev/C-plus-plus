#include <iostream>

using namespace std;

//Gives a prompt to enter the number
//Divides that number by 10000, finds the modulus, saves it to a variable and repeats that step for 1000, 100 and 10.
int main()
{
    int num, num5, num5m;
    cout << "Enter a 5-digit number: ";
    cin >> num;
    num5 = num/10000;
    num5m = num%10000;
    num4 = num5m/1000;
    num4m = num5m%1000;
    num3 = num4m/100;
    num3m = num4m%100;
    num2 = num3m/10;
    num1 = num3m % 10;

    cout << num5 << "   " << num4 << "   " << num3 << "   " << num2 << "   " << num1 << endl;

}
