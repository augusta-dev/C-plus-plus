#include <iostream>

using namespace std;

int main()
{
    int sum=0, n1, n2;
    cout << "Enter the two numbers \t";
    cin>> n1>> n2;
    for (int i=n1; i<=n2; i++) {
        if ((i%2) == 0) {
            sum+= i;
        }


    }
    cout << "Sum: " << sum;
}
