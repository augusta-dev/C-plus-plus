#include <iostream>

using namespace std;

int sum_of_even_numbers(int number);

int main()
{
    int number, value;
    cout << "Enter the number you want to compute: " << endl;
    cin >> number;
    //This function takes the number, multiplies it by 2 and finds the sum of all the even numbers before it.
    value = number;
    cout << sum_of_even_numbers(value);
    return 0;
}
int sum_of_even_numbers(int number){
    for(int i=1; i<=number; i++){
        if(number == 1){
            return 2;
        }
        else {
            return 2 * number + sum_of_even_numbers(number-1);
            //In this recursive function, we double the number and add it repeatedly until the number is 1. When the number is equal to 1, we return 2.
        }
    }

}
