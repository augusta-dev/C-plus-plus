#include <iostream>

using namespace std;

void double_it(int *p);

int main()
{
    int a = 5, b = 6;
    cout << "Value of a before doubling is " << a << endl;
    cout << "Value of b before doubling is " << b << endl;

    double_it(&a);
    double_it(&b);

    cout << "Value of a after doubling is " << a << endl;
    cout << "Value of b after doubling is " << b << endl;

    system("pause");
    return 0;
}

void double_it(int *p) { //use * to show that it's a reference
    *p = *p * 2;
}

