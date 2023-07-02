#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;
const int num=10;
struct studentData {

    char name[20];
    int studentID;
    char department[20];
    char faculty[20];
    int year;
   // int date_of_entry;
    //int expected_date_of_graduation;

};
studentData s[num];
void getData();
void showData();

int main()
{
    getData();
    showData();
}

void getData(){
    cout << "Enter the data for 10 students in this university"<< endl;
    for(int i=0; i<10; i++){
        cout<<"Student #"<<i<<": "<<endl;

        cout<<"Name: ";
        cin.getline(s[i].name, 20);
//cin.ignore();
        cout<<"Student ID: ";
        cin>>s[i].studentID;
        cin.ignore();

        cout<<"Department: ";
        cin.getline(s[i].department, 20);


        cout<<"Faculty: ";
        cin.getline(s[i].faculty, 20);


        cout<<"Year: ";
        cin>>s[i].year;
        cin.ignore();
        cout<<endl;

    }
}
void showData(){
    cout << "These are the data for 10 students in this university"<< endl;
    for(int i=0; i<10; i++){
        cout<<"Student #"<<i<<": "<<endl;
        cout<<"Name: ";
        cout<<s[i].name;
        cout<<endl;
        cout<<"Student ID: ";
        cout<<s[i].studentID;
        cout<<endl;
        cout<<"Department: ";
        cout<<s[i].department;
        cout<<endl;
        cout<<"Faculty: ";
        cout<<s[i].faculty;
        cout<<endl;
        cout<<"Year: ";
        cout<<s[i].year;
        cout<<endl;

    }
}
