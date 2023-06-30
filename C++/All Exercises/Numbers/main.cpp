#include <iostream>
#include <iomanip>
#include <bitset>


using namespace std;

int main()
{
    for (int i=1; i<=256; i++) {
        cout << "Base 2: "<< bitset<9>(i) <<"\t";
        cout << "Base 8: "<< setbase(8) << i <<"\t";
        cout << "Base 10: "<< setbase(10) << i <<"\t";
        cout << "Base 16: "<<setbase(16) << i << endl;



    }


}
