#include <iostream>

using namespace std;

int main()
{
    int total, num, smallest, num1;
    cout << "Enter the total number of integers";
    cin >> total;
    cout << "Enter the numbers: ";
    cin >> num;
    smallest=num;
    cout << "Num " << num << endl;
    for (int i=1; (i<=total-1); i++){

        cin>>num1;
        cout << "Num1 " << num1 << endl;

        if(num1<num){
            smallest=num1;
        }

    }
    cout << "Smallest: " << smallest << endl;
}
