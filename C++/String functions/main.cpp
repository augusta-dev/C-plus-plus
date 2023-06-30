#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char sentence[] ="This is a sentence with 8 token characters.";
    char *tokenPtr;

    cout << "The string to be tokenized is:\n " <<sentence <<"\n\nThe tokens are"<< endl;

    tokenPtr = strtok(sentence, " ");
    while (tokenPtr != NULL){
        cout << "\t\t" << tokenPtr << endl;
        tokenPtr = strtok(NULL, " ");
    }
    system("pause");
    return 0;
}
