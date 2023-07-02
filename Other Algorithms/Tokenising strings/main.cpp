#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

void tokenize_string(char* stringData);
const int length = 100;
char stringData[length];

char c[length][length];
void view_string(int length);

int main()
{
    cout << "Enter the string to be tokenised" << endl;
    cin.getline(stringData, length, '\n');

    cout<<stringData<<endl;

    tokenize_string(stringData);
    view_string(length);

    system("pause");
    return 0;
}

void tokenize_string(char *stringData){

        char *token = strtok(stringData, " ");
        while(token != NULL){
            cout << token <<endl;
            for(int i=0; i<length; i++){
                strcpy(*c[i], token);
                token = strtok(NULL, " ");
            }


        }
}
//
void view_string(int length){
    for(int i=0; i<length; i++)
        cout<<setw(5)<< c[i];


    cout<<endl;

}
