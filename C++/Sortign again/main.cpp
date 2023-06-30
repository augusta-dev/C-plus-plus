#include <iostream>
#include <iomanip>

using namespace std;

void sortArray(int arrayData[], int arraySize);

int main()
{
    int arraySize = 5;
    int arrayData[arraySize] = {1, 95, 04, 84, 63};

    cout << "Unsorted array: " << endl;

    for(int  i=0; i<arraySize; i++){
        cout << setw(4) << arrayData[i];
    }
    cout << endl;

    sortArray(arrayData, arraySize);

    cout << "Sorted Array:" << endl;
    for(int  i=0; i<arraySize; i++){
        cout << setw(4) << arrayData[i];
    }

    system("pause");
    return 0;
}

void sortArray(int arrayData[], int arraySize){

    int next;

    for(int i=1; i<arraySize; i++){

        int leastIndex = i;

        while(arrayData[leastIndex] < arrayData[leastIndex-1] && leastIndex > 0 ){
            next = arrayData[leastIndex];
            cout << next;

            arrayData[leastIndex] = arrayData[leastIndex-1];
            arrayData[leastIndex-1] = next;
            leastIndex--;
        }

    }
}
