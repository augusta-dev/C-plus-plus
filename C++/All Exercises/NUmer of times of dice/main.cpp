#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>


using namespace std;

int main()
{
    int integer, num1=0, num2=0, num3=0, num4=0, num5=0, num6=0;
    for (int i=1; i <= 60; i++){
            integer = 1 + rand() %6;
        cout << setw( 6 ) << integer;
        switch (integer) {
        case 1:
            num1+=1;
            break;
        case 2:
            num2+=1;
            break;
        case 3:
            num3+=1;
            break;
        case 4:
            num4+=1;
            break;
        case 5:
            num5+=1;
            break;
        case 6:
            num6+=1;
            break;
        }
    }
    cout << "The number of times 1 appeared is " << num1 << endl;
    cout << "The number of times 2 appeared is " << num2 << endl;
    cout << "The number of times 3 appeared is " << num3 << endl;
    cout << "The number of times 4 appeared is " << num4 << endl;
    cout << "The number of times 5 appeared is " << num5 << endl;
    cout << "The number of times 6 appeared is " << num6 << endl;
    cout << setw(2) << 2564560984560875<< endl;


}
