#include <iostream>

using namespace std;
int swapp (int &x, int &y);
int main()
{
    int a, b;
    cout << "This is how the seap function works: " << endl;
    cin >> a >> b;
    swapp(a,b);
}
int swapp ( const int &x, const int &y){
//using constatntrs will prevent the functon from running as we are trying to assign a variable that can only b referenced.
    cout << "X: " << x << "Y: " << y << endl;
    int temp = x;
    x = y;
    y = temp;
    cout << "X: " << x << "Y: " << y << endl;

}
