#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void draw_a_card(int number);
int find_random_number(int found_no[], int arraySize);

char *suits[4] = {"hearts", "diamonds", "clubs", "spades"};
char *ranks[13] = {"king", "queen", "jack", "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

int number, no, suit_no, rank_no, arraySize = 52;
int main()
{

    srand(time(NULL));
    cout << "Enter the number of cards to draw:";
    cin >> number;

    for(int i=1; i<=number; i++){

        draw_a_card(number);

    }
    cout << endl;

    system("pause");

    return 0;
}

void draw_a_card(int number){
    int found_no[arraySize];
    no = find_random_number(found_no, arraySize);
    found_no[no]++;
    suit_no = no/13;
    rank_no = no%13;
    cout << ranks[rank_no] << " of " << suits[suit_no] << endl;

}

int find_random_number(int found_no[], int arraySize){
    no = rand() % 52;

    if (found_no[no] != 0){
       find_random_number(found_no, arraySize);

    } else{
        return no;
    }

}
