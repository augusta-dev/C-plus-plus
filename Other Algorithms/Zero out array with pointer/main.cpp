#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void zero_out_array(int *arrayData, int arraySize);
const int arraySize = 5;
int arrayData[arraySize];

int main()
{
    cout << "Change all array elements to 0" << endl;
    zero_out_array(arrayData, arraySize);

    for(int i=0;  i<arraySize; i++){
        cout << setw(7) << arrayData[i];
    }

    system("pause");
    return 0;
}

void zero_out_array(int *arrayData, int arraySize){

    for(int i=0; i<arraySize; i++){
        arrayData[i] = 0;
    }

}

