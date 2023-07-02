#include <iostream>

using namespace std;

int main()
{
    double hours, overtimeWages, normalWages;
    cout << "Enter the working hours: ";
    cin >> hours;
    overtimeWages = (hours-40)* 27.78;
    normalWages = 40 * 18.25;
    cout << "Working hours: " << hours << " ."
        << "Overtime Hours: " << hours-40 << " ."
        << "Overtime Wages: " << overtimeWages << " ."
        << "Normal Wages: " << normalWages << " ."
        << "Total Wages: " << normalWages+overtimeWages << endl;
}
