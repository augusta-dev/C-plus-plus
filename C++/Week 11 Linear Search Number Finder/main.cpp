#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
void create_random_array(int randomArray[], int arraySize, int searchKey);
const int arraySize = 100;
int results[arraySize];
int sum = 0;
int search_Array(int results[], int arraySize);

int main()
{
    srand(time(NULL));//This key is used to get truly random numbers.


    int randomArray[arraySize];
    int searchKey;

    cout << "Enter the number to search: " << endl;
    cin >> searchKey; //The number the user enters becomes the search key.



    create_random_array(randomArray, arraySize, searchKey);
    search_Array(results, arraySize);
    if(sum != 0){
        cout << "Found value in array: ";
        for(int i=1; i<=arraySize; i++){
            if(results[i]){
                cout << i << ",  ";
            }
        }
    }else{
        cout << "No value was found."<< endl;
    }

    cout << endl;
    system("pause");
    return 0;
}

void create_random_array(int randomArray[], int arraySize, int searchKey){
    for(int i=1; i<= arraySize; i++){
        int randomNo = rand() % arraySize;
        randomArray[i] = randomNo;//You set every element in the array to a random number.
        if(searchKey == randomNo){
            results[i] = i;
        }
    }

}
int search_Array(int results[], int arraySize){

    for(int i=1; i<= arraySize; i++){
        if (results[i] != 0){
            sum++;
        }
    }
    cout << sum << endl;
    return sum;
}
