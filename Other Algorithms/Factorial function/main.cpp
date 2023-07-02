#include <iostream>

using namespace std;

int factorial(int num);
int fact = 1;
int main()
{
    int number;
    do{
        cout << "Enter the limit" << endl;
        cin>> number;
        factorial(number);
        fact=1;
    } while(number);


}

int factorial(int num) {
    for (int i=1; i<=num; i++) {
        fact *= i;
    }

    cout << num<< "! = "<<fact<<"."<<endl;

}
