#include <iostream>

using namespace std;

int main()
{
    int n1, sum=0, avg;
    cout << "Enter the number: "<<endl;
    cin>>n1;
    for(int i=1; ;i++){
        if (n1==9999){
            break;
        }
        sum+=n1;
        avg=sum/i;
    cout << "Enter the number: "<<endl;
    cin>>n1;
    }
    cout<<"Average: "<< avg;
}
