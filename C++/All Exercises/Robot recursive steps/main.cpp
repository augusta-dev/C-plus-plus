#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int steps(int distance);
int sum, last_digit;
int main()
{
    int distance;
    cout << "Enter the distance (larger than 1)" <<endl;
    cin >> distance;
    steps(distance);
    cout << "Sum: " << sum << endl;
    return 0;
}
int steps(int distance) {
    for(int i=1; i<=distance; i++){
        if (distance == 1){
            return 1;
        }
        else{
            last_digit =
            sum = last_digit + distance;
            distance + steps(distance-1);
        return sum;
        }
    }




}
