//Number finder. It generates a random number and you enter the key to find the location of that number
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
    cout << "The number generated is: ";
    create_random_array(randomArray, arraySize, searchKey);
    cout << endl;
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
        int randomNo = rand() % 10;
        randomArray[i] = randomNo;//You set every element in the array to a random number.
        if(searchKey == randomNo){
            results[i] = i;
        }
        cout << randomArray[i];
    }
}
int search_Array(int results[], int arraySize){

    for(int i=1; i<= arraySize; i++){
        if (results[i] != 0){
            sum++;
        }
    }
    cout << "The number of occurences is " <<sum << endl;
    return sum;
}
