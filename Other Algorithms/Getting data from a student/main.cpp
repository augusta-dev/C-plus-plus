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
    studentData student;
    cout << "Enter your data please: " << endl;

    cout << "Name: ";
    cin.getline(student.name, 30, '\n');

    cout << "Department: ";
    cin.getline(student.department, 20, '\n');
    //cin>> student.department;
    cout << "Student ID: ";
    cin >> student.studentID;

    cout << "Year: ";
    cin >> student.year;

    cout << "Data entered:\n" << "Name: " << student.name << "\nStudent ID: " << student.studentID << "\nDepartment: "
     << student.department << "\nYear: " << student.year;
    system("pause");
    return 0;
}
