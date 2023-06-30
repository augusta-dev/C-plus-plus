#include <iostream>

using namespace std;

int main()
{
    cout<<"While-loop"<<endl;
    int counter = 1;
    while (counter <= 10) {
        cout << counter << " ";
        counter++;
    }
    cout << endl << endl;

    cout<< "For-loop"<<endl;
    for(int counter2 = 1; counter2<=10; counter2++) {
        cout<<counter2<<" ";
    }
    cout<<endl;
    return 0;

}
