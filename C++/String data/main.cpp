#include <iostream>
#include <iomanip>
#include <cstring>


using namespace std;
struct studentData
{
    char str[600], name[100], address[200], work[200];
};

int main()
{
    studentData student;
    cout << "Type name and press enter: " << endl;
    cin.getline(student.name, 100);

    cout << "Type address and press enter: " << endl;
    cin.getline(student.address, 100);

    cout << "Type work and press enter: " << endl;
    cin.getline(student.work, 100);

    strcpy(student.str, "My name is ");
    strcat(student.str, student.name);
    strcat(student.str, ". I live at ");
    strcat(student.str, student.address);
    strcat(student.str, ". I work at ");
    strcat(student.str, student.work);
    strcat(student.str, ".");

    cout << student.str<<endl;
    return 0;
}
