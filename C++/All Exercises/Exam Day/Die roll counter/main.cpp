#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;

int roll_die (int times);
int number;
int main()
{
    int frequencySize = 7;
    srand(time(0));
    int frequency[ frequencySize ]={};
    int die_drawn[6] = {};
    cout << "Hello world!" << endl;
    for(int i=1; i<=6; i++){

        while (die_drawn[number]){
                //rerun the function until a number which hasn't been previously drawn appears.
            number = roll_die(i);

        }
            die_drawn[number] = 1;
            frequency[number+1]++;


    }
    for (int i=1; i< frequencySize; i++){
        cout << setw(10) << frequency[i];
    }
    return 0;
}
int roll_die (int times){
    number = rand() % times;
    return number;
}
