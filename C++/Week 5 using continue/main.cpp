#include <iostream>

using namespace std;

int main()
{
    for (int i =1; i <=5; i++) {
        if (i==3){
            continue;//Continue just tells us to skip that condition.
        }
        cout << i << endl;
    }

    cout << endl<<endl;

    int j = 1;
    while (j<=5) {


        if(j == 3) {
            continue;
        }
        //When you run this code, the code stops running here after continue cos it gets stuck in a loop
        cout<< j++ <<endl;
    }
    return 0;
}
