#include <iostream>

using namespace std;
int calculate_factorial(int number);
//To make every function specific, this calculates the actual value of the denominators used in calculating e. These denominators are produced by computing the factorials of each number.
float calculate_e(int accuracy);
//This program sums all fractions, using 1 as the numerator and the value gotten from the previous function as the denominator.


int sum;

int main()
{
    int accuracy;
    cout << "Please enter the accuracy of e" << endl;
    cin >> accuracy;

    cout << "The value of e to the accuracy of " << accuracy << " = " << 1 + calculate_e(accuracy) << "." << endl;
    system("pause");

}
int calculate_factorial(int number){

        if (number == 1)
            return 1;

        else
            return number * calculate_factorial(number-1);

}
float calculate_e(int accuracy){

    if (accuracy == 1)
        return 1;

    else
        return static_cast<double>(1)/calculate_factorial(accuracy) + calculate_e(accuracy-1);

}



