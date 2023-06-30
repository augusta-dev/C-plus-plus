#include <iostream>

using namespace std;

int main()
{
    int candies[5] = {2, 3, 5, 1,3}, extraCandies = 3;
    int no[5];
    int most;
        for (int i = 0; i<5; i++){
            no[i] = candies[i]+extraCandies;
        }
        most = no[0];
        for (int i=1; i<5; i++){
            if (no[i] > most){
                most = no[i];
            }
        }
        cout << most;
}
