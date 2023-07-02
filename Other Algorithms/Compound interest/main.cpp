#include <iostream>

using namespace std;

int main()
{
    double amount5 = 24, amount10 = 24;
    cout << "Enter the amount spent: "<< endl;

    for(int year = 1626; year<= 2023; year++) {
        amount5 += (amount5*0.05);
        amount10 += (amount10*0.1);
        cout << "Amount at 5%: " << amount5<< endl;
        cout << "Amount at 10%: " << amount10<< endl;

    }
}
