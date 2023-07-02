#include <iostream>

using namespace std;

//Salespeople_Salary: Salespeople of a company are paid a fixed salary plus a commission based on sales.   Base salary is $200 and commission is 9% of their gross weekly sale. Develop a C++ program that uses a while statement to input each salesperson’s gross sales for last week and calculates and displays his earnings. If gross sales entered is -1, the program quits.

int main()
{
    int salary, base = 200, commission, gsales;

    while (gsales) {
        cout << "Enter your gross weekly sale" << endl;
        cin >> gsales;
            commission = gsales * 0.09;
        //The division symbol doesn't work like the actual division symbol. It's
            salary = base + commission;
        cout << "$" << salary << endl;
        if ( gsales == -1) {
            break;
        }
    }

}
