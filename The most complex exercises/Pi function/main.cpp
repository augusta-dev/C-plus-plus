#include <iostream>
#include <iomanip>

using namespace std;

float divide_numbers(int n);//This function divides the numbers given
float value_of_pi = 0;
int main()
{
    int degree_of_accuracy;
    cout << "Enter the degree of accuracy you want: " << endl;
    cin >> degree_of_accuracy;

    for(int i=1; i<degree_of_accuracy; i+=4){
        value_of_pi += divide_numbers(i);
        value_of_pi -= divide_numbers(i+2);

    }
    cout << value_of_pi << endl;

    system("pause");
    return 0;
}

float divide_numbers(int n){

    return (static_cast<double>(4)/static_cast<double>(n));

}
