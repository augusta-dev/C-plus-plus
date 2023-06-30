#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    vector<string> sentence[200];
    vector<string> full_sentence[200] = {""};
    vector<string> sentence1[100] = {""};//copies half the sentence into this string
    vector<string> sentence2[100] = {""};//copies the other half of the sentence into this string
    vector<string> *sentence_main;
    vector<int> length;

    cout << "Enter a string to check if it's a palindrome" << endl;
    while(getline(cin.getline(sentence, 200);
    //strncpy(sentence1, se)
    sentence_main = strtok(sentence, " ");
    //strcpy(full_sentence, sentence_main);

    while (sentence_main != NULL){

        cout<< sentence_main << endl;

        strcat(full_sentence, sentence_main);
        cout << full_sentence<< endl;
        sentence_main = strtok(NULL, " ");


    }
    length = strlen(full_sentence);
    //length2 = length+length/2;
    strncpy(sentence1, full_sentence, length/2);
    sentence1[length/2] = '\0';
    strncpy(sentence2, full_sentence + (length/2), length/2);
    sentence2[length/2] = '\0';

    cout << sentence1;
    cout << sentence2;
    return 0;
}
