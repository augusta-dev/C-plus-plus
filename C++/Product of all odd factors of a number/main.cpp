#include <iostream>

using namespace std;

int main()
{
    int n1, n2, product = 1;
    cout << "Enter the numbers: ";
    cin >> n1 >> n2;
    for (int i = n1; i<=n2; i++){
        if ((i%2)!=0){
            product*= i;
            cout << i << "  ";//Just so you can see the numbers.
        }
    }
    cout << "The product is: " << product << endl;
}
