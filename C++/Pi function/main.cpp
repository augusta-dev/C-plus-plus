#include <iostream>
#include <iomanip>

using namespace std;

float divide_numbers(int n);//This function divides the numbers given
//int subtract_numbers(int n);
float value_of_pi = 0;
int main()
{
    cout << "Enter the degree of accuracy you want: " << endl;

    for(int i=1; i<20000; i+=4){//20000 is the default degree of accuracy
        value_of_pi += divide_numbers(i);
        value_of_pi -= divide_numbers(i+2);
        //cout << i << endl;
        //cout << i+2 << endl;
    }
    cout << value_of_pi << endl;

    system("pause");
    return 0;
}

float divide_numbers(int n){

    return (static_cast<double>(4)/static_cast<double>(n));

}
