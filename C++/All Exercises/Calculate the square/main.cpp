#include <iostream>

using namespace std;
//Prints a prompt to tell the user to enter a number
//Saves that number to a variable called num
//Multiplies that number by itself to get the square
//Saves that product to a variable called square
//Outputs that square to the user

int main()
{
    int num, square;
    cout << "Enter the integer you would like to square: ";
    cin >> num;
    square = num * num;
    cout << "This is the square: " << square << endl ;
}
