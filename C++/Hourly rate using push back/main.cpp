#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main()
{
    int arraySize = 5, tempHours, tempRate;

    vector<int> hoursWorked;
    vector<int> hourlyRate;

    cout << "Enter the hours worked by 5 employees and their hourly rates." << endl;
    for(int i=0; i<arraySize; i++){
      cout << "Hours worked by employee #"<< i+1<< ": ";
      cin >> tempHours;
      hoursWorked.push_back(tempHours);

      cout << "Hourly rate of employee #"<< i+1<< ": ";
      cin >> tempRate;
      hourlyRate.push_back(tempRate);

    }
      cout << endl;

    cout << "Here is the gross pay for each employee:" << endl;

    for(int i=0; i<arraySize; i++){
        double total_amount = hoursWorked[i]*hourlyRate[i];
        cout << "Employee #" << i+1 << ": $" << total_amount << endl;
    }
    system("pause");
    return 0;
}
