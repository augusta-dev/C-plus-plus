#include <iostream>

using namespace std;
int no_of_ways(int distance);
//This function calculates the number of ways the robot can walk using the fibonnaci sequence.
int main()
{
    int distance;
    cout << "Robot Walk" << endl;
    cout << "Please enter the distance in metres: ";
    cin>> distance;
    cout << "The robot can walk " << no_of_ways(distance-1) << " ways in "<< distance <<" metres." << endl;
    system("pause");
    return 0;
}
int no_of_ways(int distance){
    //This recursive function takes a continual summation of the two previous values to the actual value to continue the loop. The value, distance is entered by the user. That value as the argument in the function.
    if (distance == 1 || distance == 0){
        return 1;
    } else{

        return no_of_ways(distance-1) + no_of_ways(distance-2);

    }

}
