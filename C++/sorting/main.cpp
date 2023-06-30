#include <iostream>
#include <iomanip>

using namespace std;

void sort_list(int list_no[], int arraySize);

int main() {
    int arraySize = 5;
    int list_no[arraySize] = {1, 94, 98, 64, 78};

    cout << "Unsorted Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << setw(4) << list_no[i];
    }
    cout << endl;

    sort_list(list_no, arraySize);

    cout << "Sorted Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << setw(4) << list_no[i];
    }
    cout << endl;

    return 0;
}

void sort_list(int list_no[], int arraySize) {
    for (int i = 0; i < arraySize - 1; i++) {
        int leastIndex = i;


        for (int j = i + 1; j < arraySize; j++) {
            if (list_no[j] < list_no[leastIndex]) {
                leastIndex = j;
            }
        }


        int temp = list_no[i];
        list_no[i] = list_no[leastIndex];
        list_no[leastIndex] = temp;
    }
}
