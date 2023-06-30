#include <iostream>

using namespace std;

int main()
{
    double ton, wio;
    cout << "Hello world!" << endl;
    cin >> wio;
    ton = wio / 35273.93;
    cout << "Weight in tons: " << ton << endl;
    cout << "Number of boxes to weigh one ton: " << ((1-ton) * 35273.93) /  wio;

}
