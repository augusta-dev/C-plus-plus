#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;
int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

char *suits[4] = {"hearts", "diamonds", "spades", "clubs"};
//Because they're strings.
char *ranks[13] = {"king", "queen", "jack", "ten", "nine", "eight", "seven", "six", "five", "four", "three", "two", "ace"};

int card_drawn[52];
int card_remaining = 52;

int main()
{
    int n, i;
    srand(time(NULL));//random numbers
    while(1){
        cout << "Enter no. of cards to draw (0 to exit): " << endl;
        cin>> n;
        if (n == 0)
            break;
        for(i =1; i <=n; i++)
            draw_a_card();//Keep drawing random cards until we get the full number requested.


    }
    return 0;
}

void draw_a_card(){
    int r;//random rank index
    int s;//random suit index
    int n, card;

    n = rand_0toN1(card_remaining--);
    card = select_next_available(n);

    r = card % 13; //There can be as many as 12 ranks
    s = card / 13; //There are only 4 suiits
    cout << ranks[r] << " of " << suits[s] << endl;

}
int rand_0toN1(int n){
    return rand() % n;
}
int select_next_available(int n){
    int i = 0;
    while (card_drawn[i])
        i++;

    while (n-- > 0) {
        i++;
        while(card_drawn[i])
            i++;
    }
    card_drawn[i] = true;
    return i;
}
