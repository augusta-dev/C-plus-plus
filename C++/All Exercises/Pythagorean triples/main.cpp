#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int side1, side2, hypotenuse;

    for(int side1=1; side1<=500; side1++){
        for(side2=1; side2<=500; side2++){
         for(hypotenuse=1; hypotenuse<=500; hypotenuse++){
            if(side1*side1 + side2*side2 == hypotenuse*hypotenuse){
                cout << side1 << "\t" << side2 << "\t" << hypotenuse << "\n" ;
            }
         }
    }
}
}
