#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int even_sum(int n);
int sum = 0;
int main()
{
    int number, value;
    cout << "Enter the number: " << endl;
    cin>> number;
    value = 2 * number;
    even_sum(value);
    cout << "Sum: " << sum << endl;
    return 0;


}

int even_sum(int n){

    while (n >= 2) {

        if(n == 2){
            return 2;
        } else {
            sum = n + even_sum(n-2);
            return sum;
        }

    }



}
