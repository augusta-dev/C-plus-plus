#include <iostream>

using namespace std;

int main()
{
    cout << "Enter your radius:" << endl;
    int rad;
    cin >> rad;
    cout << "Attributes of the circle" << endl;
    cout << "Diameter of the circle: " << rad+rad << endl;
    cout << "Circumference of the circle: " << 2 * 3.14 * rad << endl;
    cout << "Area of the circle: " << 3.14*rad*rad << endl;

}
