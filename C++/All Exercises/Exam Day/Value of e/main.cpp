#include <iostream>
#include <iomanip>


using namespace std;
void value_of_e(int accuracy);
double structure_of_e(int accuracy);
int factorial(int number);

int main()
{
    int accuracy;
    cout << "Enter the degree of accuracy you desire:" << endl;
    cin >> accuracy;
    //Here the function is called with the parameter gotten from the user's input.
    value_of_e(accuracy);
    system("pause");
    return 0;
}
int factorial(int number){
    //Since the factorial is the fist digit used for subsequent calculations, it is the first function to be initiated and completed.
    for(int i=1; i<=number; i++){
        if(number<=1){
            return 1;
        }
        else{
        //As long as the number is above 1, the function multiplies the number repeatedly as it decreases to 1.
            return number * factorial(number-1);
        }
    }

}
double structure_of_e(int denominator){
    //Here, the function calls the factorial function to produce a value from the value of its argument. This value is used as a denominator against 1. Then, the function calls itself again with an input one less than the initial value.
    if (denominator == 1){
        return 1;
    }else{
        return double(1)/double(factorial(denominator-1)) + structure_of_e(denominator-1);
    }

}
void value_of_e(int accuracy){
    //Here, the value of the previous function is read and 1 is added to it. The input of the user is used directly here. Since it merely reads a value, it is a void function.
    cout << "The value of e with the precision of " << accuracy << " is " <<  fixed << setprecision(10) << structure_of_e(accuracy) << endl;

}
