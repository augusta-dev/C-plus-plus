#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void sortArray(int arrayData[]);//sorts the array
void swapValues(int *firstValue, int *secondValue);

const int arraySize = 10;
int arrayData[arraySize];
int main()
{
    cout << "Enter the values you want to sort" << endl;
    for(int i=0; i<arraySize; i++){
        cout<< " Enter array element #" << i << ": ";
        cin >> arrayData[i];
    }
    sortArray(arrayData);

    cout << "This is the array sorted in the reverse order: " << endl;
    for(int i=0; i<arraySize; i++){
        cout << setw(5) << arrayData[i];
    }
    cout << endl;
    system("pause");
    return 0;
}

void sortArray(int arrayData[]){
    for(int i=0; i< arraySize; i++){

        int maximum = i;
        for(int j = i+1; j< arraySize; j++){
            if (arrayData[j]>arrayData[maximum])
                maximum = j;

        }
        swapValues(&arrayData[maximum], &arrayData[i]);

    }
}

void swapValues(int *firstValue, int *secondValue){
    int tempValue = *firstValue;
    *firstValue = *secondValue;
    *secondValue = tempValue;

}
