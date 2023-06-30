#include <iostream>

using namespace std;

int main()
{
    int terms=10, num=4;
    float pie = 0.00, denom1,  second;

    for( int i=1; i<= terms; i+=2)
        {

        first = (num/i);
        cout << i << "\t";
        i+=2;
        second = (num%i);
        cout << i << "\t";
        pie += first - second;
        cout<<"First " <<terms<<" terms: " << pie<< endl;
        cout<<"First " <<first<<" Second: " << second<< endl;


    }


}
