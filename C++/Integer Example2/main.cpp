#include <iostream>

using namespace std;

int main()
{
    int num, num1, num11, num2, num22, num3, num33, num4, num5;
    cout << "Enter your number here:";
    cin>>num;
    num1=num/10000;
    num11=num%10000;
    num2=num11/1000;
    num22=num11%1000;
    num3=num22/100;
    num33=num22%100;
    num4=num33/10;
    num5=num33%10;
    //cout << num <<num1 <<num2 <<num3 <<num4 <<num5;//
    cout <<num1 <<" " <<num1*num1 <<" " <<num1*num1*num1 <<  endl;
    cout <<num2 <<" " <<num2*num2 <<" " <<num2*num2*num2 <<  endl;
    cout <<num3 <<" " <<num3*num3 <<" " <<num3*num3*num3 <<  endl;
    cout <<num4 <<" " <<num4*num4 <<" " <<num4*num4*num4 <<  endl;
    cout <<num5 <<" " <<num5*num5 <<" " <<num5*num5*num5 <<  endl;



    return 0;
}
