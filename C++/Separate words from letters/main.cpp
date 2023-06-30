#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    char sentence[500] = "iisaihiis biwdhn9oidj8uwne28n2";
    char numbers[11] = "0123456789";
    char *i;
    char without[200] = {0}; // Initialize without array with null terminators

    cout << "Enter the sentence to search: " << endl;
    // cin.getline(sentence);
    i = sentence;
    while (*i) {
        if (strchr(numbers, *i) == NULL) {
            strncat(without, i, 1);
        }
        i++;
    }

    cout << without << endl;

    return 0;
}
