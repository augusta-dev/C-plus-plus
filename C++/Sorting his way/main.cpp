#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int arraySize = 10;
    int data[arraySize] = {10, 94, 39, 93, 04,93, 2, 39, 44, 58};
    int insert;

    cout << "Unsorted array: \n";

    for (int i=0; i<arraySize; i++){
        cout << setw(4) << data[i];
    }

    for (int next = 1; next < arraySize; next++){
        insert = data[next];
        int moveItem = next;
        while ((moveItem > 0) && data[moveItem -1]>insert) {
            data[moveItem] = data[moveItem -1];
            moveItem--;
        }
        data[moveItem] = insert;

    }
    cout << "\nSorted array: \n";

    for(int i=0; i< arraySize; i++){
        cout<< setw(4) <<  data[i];
    }
    cout << endl;
    system("pause");

    return 0;
}
