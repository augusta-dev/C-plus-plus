#include <iostream>
#include <iomanip>

using namespace std;

unsigned long gcf(int num1 = 1, int num2 = 1);
int main()
{
    int num1, num2;

    cout << "Enter the first number: ";
    cin>>num1;
    cout << "Enter the second number: ";
    cin>>num2;
    cout << gcf(num1, num2);


}
unsigned long gcf(int num1, int num2) {
    if (num1 == 0 || num2 == 0){
        return 0;
    }


    else{

        if (num1%num2 == 0){
            return num2;
        }
        gcf(num2, num1%num2);
            }
}
