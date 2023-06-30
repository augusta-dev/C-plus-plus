#include <iostream>

using namespace std;
void  sort_Array(int unsortedArray[], int arraySize, int temp);
 int temp;
int main()
{
    int arraySize = 5;
    int unsortedArray[arraySize] = {53, 24, 58, 98, 02};
    int sortedArray[arraySize];

    cout << "The sorted array is" << endl;
    sort_Array(unsortedArray, arraySize, temp);
    return 0;
}

void  sort_Array(int unsortedArray[], int arraySize, int temp){

        temp = unsortedArray[0];
     cout << unsortedArray[0];
    for(int i=1;  i<= arraySize; i++){
        if (temp > unsortedArray[i]){
            temp = unsortedArray[i];
           // cout << unsortedArray[i];
        }
    }
    cout << temp;
}
