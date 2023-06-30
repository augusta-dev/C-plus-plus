#include <iostream>
#include <cstring>


using namespace std;

const int nameLength = 30, deptLength = 20;
struct studentData {
    char name[30], department[30];
    int studentID;
    int year;
};

int main()
{
    studentData augusta;
    cout << "Enter your data please: " << endl;

    cout << "Name: ";
    cin.getline(augusta.name, 30, '\n');



    cout << "Department: ";
    cin.getline(augusta.department, 20, '\n');
    //cin>> augusta.department;
    cout << "Student ID: ";
    cin >> augusta.studentID;

    cout << "Year: ";
    cin >> augusta.year;

    cout << "Data entered:\n" << "Name: " << augusta.name << "\nStudent ID: " << augusta.studentID << "\nDepartment: "
     << augusta.department << "\nYear: " << augusta.year;
    system("pause");
    return 0;
}
