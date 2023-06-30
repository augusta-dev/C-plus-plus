#include <iostream>

using namespace std;

int main()
{
    int time, seconds, minutes, hours;
    cout << "Enter the length of time" << endl;
    cin >> time;
    seconds = (time%60);
    minutes = (time % 3600) / 60;
    hours = time / 3600;


    cout << "Hours: " << hours<< "hr. " << "Minutes: " << minutes << "min. " << "Seconds: " << seconds<< "s. " << endl;

}
