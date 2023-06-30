#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

void sortArray(int n);
void swap(int *p1, int *p2);

int a[10];

int main()
{
    int i;
    cout << "Enter 10 elements for the array..." << endl;
//    sortArray(currentIndex, leastIndex);

    for(int i=0; i<10; i++){
        cout << "Enter array element #" << i+1  << ": ";
        cin>> a[i];
    }

    sortArray(10);

    cout<< "\nHere are all the array elements, sorted:" << endl;
    for(i=0; i<10; i++){
        cout << a[i] << " ";
    }

    system("pause");
    return 0;
}

void sortArray(int n){
    int i, j, minimum;
    for(i = 0; i< n-1; i++){
        minimum = i;
        for(j=i+1; j<n; j++)
            if (a[j] < a[minimum])
                minimum = j;
        if(i!=minimum)
            swap(&a[i], &a[minimum]);
    }

}

void swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
