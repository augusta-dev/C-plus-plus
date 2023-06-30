#include <iostream>

using namespace std;
int steps (int distance);
int stepss = 0;
int main()
{
    int distance;
    cout << "Enter the distance" << endl;
    cin >> distance;
    steps(distance);
    cout << "Total steps:" << stepss << endl;
    system("pause");
}
int steps(int distance){

    if (distance == 1 || distance == 0){
        return 1;
    }else{
        stepss = steps(distance-1)  + steps(distance-2);
        return stepss;

    }

}
