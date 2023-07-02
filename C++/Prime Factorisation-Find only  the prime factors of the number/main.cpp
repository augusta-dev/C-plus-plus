#include <iostream>

using namespace std;
void find_prime_factors(unsigned long);
int last_number=1;

int main()
{
    int number;
    cout << "Enter the number:" << endl;
    cin>> number;
    find_prime_factors(number);
    system("pause");
    return 0;
}

void find_prime_factors(unsigned long number){

    for(int i=2; i<=number; i++){
        if(number%i == 0){

            if(last_number == i){
                find_prime_factors(number/i);
                return;

            } else{
                cout << i<< ", ";
                last_number = i;
                find_prime_factors(number/i);
                return;
            }

        }
    }

}
