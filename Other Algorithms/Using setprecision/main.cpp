#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main()
{
    double root2 = sqrt(2.0);
    int places = 0;

    cout << endl;
    cout << 1.234567 << "\t \t default precision: " << cout.precision() << endl;
    cout << 31.234568567 << "\t \t default precision: " << cout.precision() << endl;
    cout << 231.23457809067 << "\t \t default precision: " << cout.precision() << endl;
    cout << 2341.234554567 << "\t \t default precision: " << cout.precision() << endl;
    cout << 12341.23445567 << "\t \t default precision: " << cout.precision(5) << endl;
    cout << 123451.234556467 << "\t \t default precision: " << cout.precision(5) <<fixed << endl;
    cout << "\n Square root of 2 with default precison (6 digits total before and after the point) ==> " << root2 << endl<<endl;
    cout << "Precision with precisons 0-9 set by ios_base member function cout.precision()" << endl;
    cout << fixed;
    while (places <= 9) {
        cout.precision(places);
        cout << "cout.precision("<<places<<"):"<<"\t" << root2 << endl;

        cout << "cout.precision("<<places<<"):"<<"\t" << 1265865.5455684 << endl;

        places++;
    }
}
