#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int rand_0toN1(int n);
void draw_a_card();

char *suits[4] = {"hearts", "diamonds", "spades", "clubs"};
char *ranks[13] = {"ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};
int randomNumbers[53];
//char output[52];

int main()
{
    int n, i;

    srand(time(NULL));
    while (1){
        cout << "Enter no. of cards to draw (0 to exit): ";
        cin >> n;
        if ( n == 0)
            break;
        for( i=1; i<=n; i++){
            cout << i << "   ";
            draw_a_card();

        }


    }
    system("pause");
    return 0;
}

void draw_a_card(){

    int r;
    int s, card;
    card = rand_0toN1(52);
    r = card % 13;
    s = card / 13;
//    char *rankC[1] = ranks[r];
//    char *suitC[1] = suits[s];
    cout << ranks[r] << " of " << suits[s]<< endl;

//    output[i] = {rankC, suitC}
}

int rand_0toN1(int n) {
    int sum = n;

    int randNo = rand() % n;
    if(randomNumbers[randNo]){
        rand_0toN1(sum);
        // sum++;
    }
    else{
        randomNumbers[randNo]++;
        return randNo;
    }


}

//int booleanTest(int r, int k){
//
//}
