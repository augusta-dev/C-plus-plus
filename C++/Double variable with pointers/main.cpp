#include <iostream>

using namespace std;
void doubleValue(int *b);

int main()
{
    int a=5;
    int b=6;
    cout << "Value of a before function: " << a << endl;
    cout << "Value of b before function: " << b << endl;

    // a pointer cannot be entered as an argument.
    // doubleValue(*a);
    // doubleValue(*b);
    doubleValue(&a);
    doubleValue(&b);

    cout << "Value of a after function: " << a << endl;
    cout << "Value of b after function: " << b << endl;

    system("pause");
    return 0;
}

void doubleValue(int *b){

    *b = *b *2;

}
