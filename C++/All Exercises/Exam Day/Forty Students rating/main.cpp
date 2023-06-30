#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

int main()
{
    int noOfStudents = 40, frequencyRange = 11, rating;
    int frequency[frequencyRange] = {};
    cout << "These are the ratings given by the 40 students: " << endl;
    cout << "Rating" << setw(15) << "Number of Students"<< endl;
    for(int i=1; i<= noOfStudents; i++){
        rating = 1 + rand() % 10;
        frequency[rating]++;
    }
    for(int i=1; i<frequencyRange; i++){
        cout << i << setw(15) << frequency[i]<< endl;
    }
    system ("pause");
    return 0;
}
