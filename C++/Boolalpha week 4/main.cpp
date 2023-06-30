#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout << boolalpha << "Logical AND (&&)"
        << "\nfalse && false: " << (false && false)
        << "\nfalse && true: " << (false && true)
        << "\ntrue && false: " << (true && false)
        << "\ntrue && true: " << (true && true) << "\n\n";

    cout << boolalpha << "Logical OR (||)"
        << "\nfalse || false: " << (false || false)
        << "\nfalse || true: " << (false || true)
        << "\ntrue || false: " << (true || false)
        << "\ntrue || true: " << (true || true) << "\n\n";
    cout << boolalpha << "Logical NOT (!)"
        << "\n!false " << (!false)
        << "\n!true " << (!true) << endl;


}
