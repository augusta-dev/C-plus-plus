#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
void get_factors(int num);
int last_num = 1;

int main()
{
    while(1) {
        int number;
        last_num = 1;
        cout << "Enter the number: ";
        cin>> number;
        get_factors(number);
    }
}
void get_factors(int num) {
//    int squareroot = static_cast <double> (sqrt(num));
    //finds the squareroot of the number.
    int i=2;

    for (i=2; i<= num; i++){
            //since the number itself was passed as an argument, the code also checks if the number is prime.
        if(num%i == 0){
            if (last_num == i ){
                get_factors(num/i);
                return;

            }else{
                cout << i << ", "<< endl;
                last_num = i;
                get_factors(num/i);
                //reveals the integer as long as it isn't equal to the last digit
                return;
            }
        }

    }



}
