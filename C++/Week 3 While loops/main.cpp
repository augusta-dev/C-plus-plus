#include <iostream>
#include <unistd.h>
#include <time.h>

using namespace std;

int main()
{
    cout << "Enter a number to begin the countdown: ";
    int counter = 1;
    int n;
    cin >> n;
    while (counter <= n) {
        cout << counter << endl;
        counter++;
        sleep(1);
    }
    cout << "Done" << endl;

}
