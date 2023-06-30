#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void get_divisor(int n);

    int i, last_num = 1;
int main()
{
    int n;
    cout << "Enter a number" << endl;
    cin>>n;
    get_divisor(n);
    return 0;
}
void get_divisor(int n) {

    double sqrt_of_n = static_cast<double>(sqrt(n));

    for(i=2; i<=sqrt_of_n; i++) {
        if (n%i == 0){
                if (last_num == i) {
                  get_divisor(n / i);
                  return;
                }else{
                    cout <<i <<", ";
                    last_num = i;
                    get_divisor(n / i);
                    return;
                }

        }

    }
    if (n!= last_num){
       cout << n;
    }

    cout<<endl;
}


