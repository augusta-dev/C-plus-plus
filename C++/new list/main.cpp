#include <iostream>

using namespace std;

void sort_list(int no_list[], int arraySize);

const int arraySize = 5;
int no_list[arraySize] = {1, 99, 3, 86, 38};
int sorted_list[arraySize];
int j;

int main()
{
    cout << "Unsorted list: ";
    for (int i = 0; i < arraySize; i++) {
        cout << no_list[i] << ", ";
    }
    cout << endl;

    for (int j = 0; j < arraySize; j++) {
        sort_list(no_list, arraySize);
    }

    cout << "Sorted list: ";
    for (int i = 0; i < arraySize; i++) {
        cout << sorted_list[i] << ", ";
    }
    cout << endl;

    return 0;
}

void sort_list(int no_list[], int arraySize)
{
    int least = 100;
    int leastIndex = 0;

    for (int i = 0; i < arraySize; i++) {
        if (no_list[i] < least) {
            least = no_list[i];
            leastIndex = i;
        }
    }

    no_list[leastIndex] = 100;
    sorted_list[j] = least;
}
