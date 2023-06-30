#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;
void roll_die(int &no_of_times);
int no = 0;
int frequency[12] = {};
int main()
{
    int no_of_times = 6000000;

    cout << "This function displays the likelihood of every face of a die if it was rolled 6,000,000" << endl;
    roll_die(no_of_times);
    system("pause");
    return 0;
}

void roll_die(int &no_of_times){
    for(int i=1; i<=no_of_times; i++){
        no = 1 + rand() % 10;
        frequency[no]++;

    }
    for (int i=1; i<=10; i++){
        cout << "Frequency of " << i << " is equal to " << frequency[i] << endl;
    }

}
