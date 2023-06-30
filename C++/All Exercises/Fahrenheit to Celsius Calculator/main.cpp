#include <iostream>

using namespace std;
//The program
//Prints Enter the Number
//Saves the number into a variable called ctemp
//Multiplies that number by 1.8, adds 32 and saves the result in a variable called ftemp
//Prints that variable.
int main()
{
    double ctemp, ftemp;
    cout << "Enter the number you want to convert:";

    cin >> ctemp;
    ftemp = (ctemp * 1.8) +32;
    cout << ftemp << endl;

}
