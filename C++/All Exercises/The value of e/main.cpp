#include <iostream>
#include <iomanip>
#include <cmath>



using namespace std;

int factorial(int num);
int fact = 1, numerator =1, denominator;
float e = 1;

float valueE (int val, int val2);
int main()
{
    int number;
    do{
        cout << "Enter the limit" << endl;
        cin>> number;
        factorial(number);
        fact=1;
        e=1;
    } while(number);

}

int factorial(int num) {
    for (int i=1; i<=num; i++) {
        fact *= i;
        denominator=fact;
        valueE(numerator,denominator);
    }

    cout << num<< "! = "<<fact<<"."<<endl;

}
float valueE(int numerator, int denominator){
    e+= static_cast<double>(numerator) / denominator;
    cout << "The value of e is: "<< setprecision(19) << fixed << e << endl;
}
