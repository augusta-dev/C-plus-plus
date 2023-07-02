#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main()
{
    int arraySize = 5;
    vector<int> hoursWorked(arraySize);//can only use index of the arraySizze is indicated.
    vector<int> hourlyRate(arraySize);
    cout << "Enter the hours worked by 5 employees and their hourly rates." << endl;
    for(int i=0; i<arraySize; i++){
      cout << "Hours worked by employee #"<< i+1<< ": ";
      cin >> hoursWorked[i];

      cout << "Hourly rate of employee #"<< i+1<< ": ";
      cin>>hourlyRate[i];

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
