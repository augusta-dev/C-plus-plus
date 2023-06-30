#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    char sentence[500] = "7109 My name is 910 98 auguystana dk djo 20812";
    char letters[53] = "qwertyuiopasdfghjklmnbvcxzQWERTYUIOPLKJHGFDSAZXCVBNM";
    char *i;
    char without[200] = {0}; // Initialize without array with null terminators

    cout << "Enter the sentence to search: " << endl;
    // cin.getline(sentence);
    i = sentence;
    while (*i) {
        if (strchr(letters, *i) == NULL) {
            strncat(without, i, 1);
        }
        i++;
    }

    cout << without << endl;

    return 0;
}
