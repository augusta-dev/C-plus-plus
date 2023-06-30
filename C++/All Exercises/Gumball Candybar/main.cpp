#include <iostream>

using namespace std;

int main()
{
    int num;
    float gumB;
    cout << "Enter the number of coupons you won: ";
    cin >> num;
    gumB = (num%10)/3;
    cout << "Affordable candy bars: " << num / 10 <<endl;
    cout << "Affordable gum balls after spending money on candy bars: " << gumB << endl;
    cout << "Total Affordable gum balls: " << num / 3;
}
