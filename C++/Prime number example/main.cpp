#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum=0;
    cout << "Enter the number: ";
    cin >> n1 >> n2;
    for(int i=n1; i<=n2; i++){

        if(i % 2 == 0){
            sum+=i;
            cout << i << " ";
        }


    }
    cout << "Sum: " << sum;
}
