#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter two integers[1, 20] : ";
    cin >> x >> y;
    for (int i=1; i<=y; i++) {
        for (int j=1; j<= x; j++)
            cout<<"@";
        cout<<endl;
    }
    return 0;

}
