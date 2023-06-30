#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>

using namespace std;

void convertToLower(char *sentence);

int main()
{
    char sentence[200];
    char full_sentence[200] = {""};
    char sentence1[100] = {""};//copies half the sentence into this string
    char sentence2[100] = {""};//copies the other half of the sentence into this string
    char sentence3[100] = {""};
    char *sentence_main;
    size_t length;

    cout << "Enter a string to check if it's a palindrome" << endl;
    cin.getline(sentence, 200);
    //strncpy(sentence1, se)
    sentence_main = strtok(sentence, " ");
    //strcpy(full_sentence, sentence_main);

    while (sentence_main != NULL){

        //cout<< sentence_main << endl;

        strcat(full_sentence, sentence_main);
        //cout << full_sentence<< endl;
        sentence_main = strtok(NULL, " ");


    }
    length = strlen(full_sentence);
    convertToLower(full_sentence);
    //full_sentence = tolower(full_sentence)
    //length2 = length+length/2;
    strncpy(sentence1, full_sentence, length/2);
    sentence1[length/2] = '\0';

    strncpy(sentence2, full_sentence +length - (length/2), length/2);
    sentence2[length/2] = '\0';

    cout << sentence1 << endl;
    cout << "S2: " << sentence2 << endl;
    //flipping elements in the second string
    size_t i=0;
    while(sentence2[i] !='\0' && i >=0){
        sentence3[i] = sentence2[(length/2)-i-1];
        i++;
    }
    sentence3[i] = '\0';
    cout << sentence3<< endl;

    int compared_value = strcmp(sentence1, sentence3);
    //cout << compared_value << endl;
    if(compared_value == 0){
        cout << "The sentence entered is a palindrome." << endl;

    }
    else{
        cout << "The sentence entered isn't a palindrome."<< endl;

    }

    return 0;
}
void convertToLower(char *sentence){
    while(*sentence != '\0'){
        *sentence = tolower(*sentence);
        sentence++;
    }

}
