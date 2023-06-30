#include <iostream>

using namespace std;
//Write a program that computes all prime factors of the entered number.
void prime_factors(int i);
int last_number = 1, number;

int main()
{
    cout << "Enter the number" << endl;
    cin >> number;

    prime_factors(number);
    //Here, the function prime_factors is run on the inputed number.
    system("pause");
}
void prime_factors(int number){
    for(int i=2; i<=number; i++){
        //The function iterates over every value less than or equal to the inputed value, checking for a factor.
        if(number % i == 0){

            if(last_number != i){
//
                cout << i << ", ";
                last_number = i;
                prime_factors(number/i);
                return;
            }
            else{
                prime_factors(number/i);
                return;
            }
            cout << number <<endl;

        }



    }



}
