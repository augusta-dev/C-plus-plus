#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;
void find_most_recurring(int *arr, int arraylength, char *alphabet, int alphabetlength);//for finding the most recurring letter.

int main()
{
    char sentence[200];
    int found_length = 26;
    char alphabet[found_length] = "abcdefghijklmnopqrstuvwxyz";//using all the letters in the alphabet as search criteria
    int found_letter[found_length]= {0};

    cout << "Enter the string to search" <<endl;
    cin.getline(sentence, 200);
    cout << "This is the most recurring letter: in "<< sentence << endl;

    for(int i=0; i<26; i++){
        char *found;
        found = strchr(sentence, alphabet[i]);
        while (found != NULL){
            found_letter[i]++;
            found = strchr(found+1, alphabet[i]);
        }
    }

    for (int i=0; i<26; i++){
        cout << "The occurence of "<< alphabet[i] << " is " <<found_letter[i] <<endl;
    }
    find_most_recurring(found_letter, found_length, alphabet, found_length);

    system("pause");
    return 0;
}

void find_most_recurring(int *arr, int arraylength, char *alphabet, int alphabetlength){

    int most_recurring = 0;
    for(int i=0; i<arraylength; i++){
        if(arr[i] > arr[most_recurring]){
            most_recurring = i;
        }
    }
    cout << "The most recurring letter is: " << alphabet[most_recurring] <<endl;

}
