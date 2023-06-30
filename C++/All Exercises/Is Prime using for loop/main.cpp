#include <iostream>

using namespace std;

int main()
{
    bool isPrime = true;
    int num;

    cout << "Enter A Number";
    cin >> num;
    for (int i=2; i<num; i++) {
        if((num % i) == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
}
