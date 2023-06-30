#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>

using namespace std;
int array1Size = 7, array2Size =10;
vector<int> integers1(array1Size);
vector<int> integers2(array2Size);
vector<int> integers3(array1Size);
int tempValue;

int main()
{
    cout << "Size of vector integers1 is "<< integers1.size()<< endl ;
    cout << "Vectors after initialisation: "<< endl;
    for(int i=0; i<array1Size; i++){

        cout << setw(10) << integers1[i];
        if ((i+1)%4 == 0)
                cout << endl;
    }
    cout << endl;
//Display vector 2
    cout << "Size of vector integers2 is "<< integers2.size()<< endl ;
    cout << "Vectors after initialisation: "<< endl;
    for(int i=0; i<array2Size; i++){

        cout << setw(10) << integers2[i];
        if ((i+1)%4 == 0)
                cout << endl;
    }
    cout << endl;

//    cout << "Enter 17 integers: "<< endl;
//    for(int i=0; i<17; i++){
//
//        cin >> integers1[i];
//
//        if(i >= 7){
//            for(i=7; i<=17; i++){
//                cin >> integers2[i-7];
//            }
//        }
//
//    }

    cout << "After input, the vectors contain: "<< endl ;
    cout << "Integers1: "<< endl;
    for(int i=0; i<array1Size; i++){
        cout << setw(10) << integers1[i];
        if ((i+1)%4 == 0)
                cout << endl;
    }
    cout << endl;
//Display vector 2
    cout << "Integers2: "<< endl;
    for(int i=0; i<array2Size; i++){

        cout << setw(10) << integers2[i];
        if ((i+1)%4 == 0)
                cout << endl;
    }
    cout << endl;

    if(integers1 != integers2){
        cout<< "Evaluating: integers1 != integers2\n";
        cout << "Integers1 and integers2 are not equal";
    }
    else {

        cout<< "Evaluating: integers1 = integers2\n";
        cout << "Integers1 and integers2 are equal";

    }

    cout << "integers1[5] is " << integers1[5] <<endl;
    cout << "Assigning 1000 to integers1[5]" << endl ;
    integers1[5] = 1000;
    for(int i=0; i<array1Size; i++){
        cout << setw(10) << integers1[i];
        if ((i+1)%4 == 0)
                cout << endl;
    }
    cout << endl;


    system("pause");

    return 0;
}
