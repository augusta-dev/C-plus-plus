#include <iostream>

using namespace std;
int sizeitem;

void kidsWithCandies(int candies[], int sizeitem, int extraCandies, bool output[]){
        bool value;
        int no[sizeitem];
        for(int i = 0; i<sizeitem; i++){
            no[i] = candies[i] + extraCandies;
            cout << no[i] << endl;
        }
        for(int i=0;i<sizeitem; i++){
            value = true;
            for(int j=0; j<sizeitem; j++){
                if(no[i] <= candies[j]){
                    value = false;
                }
            }
            output[i] = value;
        }
         cout << "[";
        for(int i=0; i<sizeitem; i++){
            cout << boolalpha << output[i] << ", ";
        }
        cout << "]";
    }

int main()
{
    cout << "Enter the size of the array:";
    cin >> sizeitem;

    int candies[sizeitem], extraCandies = 3;
    bool output[sizeitem];

    for (int i=0; i<sizeitem; i++){
        cout << "Enter the #" << i << " item: ";
        cin >> candies[i];
    }

    kidsWithCandies(candies, sizeitem, extraCandies, output);

    return 0;
}
