#include <iostream>

using namespace std;

int main()
{
    int x = 1;

    for (int y=2; x<5 && y<5; y++) {
        cout << x << " * " << y << " = " << x * y << endl;
        x++;
    }
    cout<<endl;
    return 0;


}
