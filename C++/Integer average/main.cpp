#include <iostream>

using namespace std;

int main()
{


    double num, avg, sum=0;
    cout << "Enter the integer: ";
    cin >> num;

    for (int i=1; num != 9999 ; i++){

        sum+=num;
        avg = sum/i;
        cout << "Average: " << avg << endl;
        cout << "Enter the integer: " ;
        cin >> num;

    }
    cout << "Average: " << avg << endl;

}
