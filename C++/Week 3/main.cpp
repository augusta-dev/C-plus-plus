#include <iostream>

using namespace std;

int main()
{
    cout << "Two numbers hadi:" << endl;

    int num1, num2;

    cin >> num1 >> num2;
    if(num1 == num2) {
        cout << "\n\n" << num1 << " == " << num2 << endl;
    }
    if(num1 != num2) {
        cout << "\n\n" << num1 << " != " << num2 << endl;
    }
    if(num1 < num2) {
        cout << "\n\n" << num1 << " < " << num2 << endl;
    }
    if(num1 > num2) {
        cout << "\n\n" << num1 << " > " << num2 << endl;
    }
    if(num1 <= num2) {
        cout << "\n\n" << num1 << " <= " << num2 << endl;
    }
    if(num1 >= num2) {
        cout << "\n\n" << num1 << " >= " << num2 << endl;
    }
    else{
        cout << "What did' you type?" << endl;
    }

    cout << (num1>0?"Passed":"Failed");
    cout << (num1>0?"Passed":"Failed");
}
