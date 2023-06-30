#include <iostream>
#include <iomanip>

using namespace std;
void sort_list(int list_no[], int arraySize);

int main(){

    int arraySize = 5;
    int list_no[arraySize] = {1, 94, 98, 64, 78};

    cout << "Sorted List:";
    for (int i=0; i< arraySize; i++){
        cout << setw(4) << list_no[i];
    }
    cout << endl;

    sort_list(list_no, arraySize);

}

void sort_list(int list_no[], int arraySize){

    int least_index = 0;
    int least;
    least = list_no[1];

    for(int i=0; i<arraySize; i++){

        while(least > list_no[i]){
            least = list_no[i];
            least_index = i;
            list_no[i] = list_no[least_index];
        }
        cout << least;
//        least = list_no[i+1];

    }

}
