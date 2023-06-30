#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x, y, k = 1, i=1, ans;

    cout << "Input the base: ";
    cin >> x;
    cout << "Input the power: ";
    cin >> y;
    while (i <= y) {
        k*= x;
        i++;
    }
    //If i starts from 0, you should one less than y, ie the condition is "i < y". If you start from i=1, you should do "i <= y"
    cout << "total " << k << endl;


}
