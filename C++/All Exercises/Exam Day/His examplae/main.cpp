#include <iostream>
#include <iomanip>

using namespace std;
long Factorial (int n);
double Calculate_e(int a);

int main()
{
    int t;
    cout << "Hello world!" << endl;
    cin >> t;
    Calculate_e(t);
    return 0;
}

double Calculate_e(int a){
    double e = 0.0;

    for(int i =0; i<a; i++){
        e = e + double(1)/double(Factorial(i));
    }
    cout << "e: " << fixed << setprecision(10) << e << endl;

}
long Factorial (int n) {
    long factorial = 1.0;
    if(n < 0)
        cout << "Error!"<< endl;
    else {
        for(int i = 1; i<=n; i++){
            factorial*=i;
        }
    }
    return factorial;

}
