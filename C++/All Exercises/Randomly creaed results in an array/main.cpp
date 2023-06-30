#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>


using namespace std;

int main()
{
//    int arraylength, num, num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0, num6 = 0, num7 = 0, num8 = 0, num9 = 0, num10 = 0;
    int arraylength, num;
    cout << "Enter the array length" << endl;
    cin >> arraylength;
    int n[arraylength];
    int frequency[11] = {0};
    for (int i=0; i<arraylength; i++){
        n[i] = 1 + rand() % 10;
        num = n[i];

        frequency[num]++;
        cout << "Number: " << num << endl;
    }
    cout << "These are the results of the poll taken with the number of people who voted 1 - 10" << endl;
    cout <<setw(10)<< "Rating: " << setw(10) << "Frequency"<< endl;
    for (int i=0; i< 10; i++) {

        cout << setw(10) << i+1 << setw(10) << frequency[i+1] << endl;

        //Using switch as a counter
//        switch (num){
//            case 1:
//                num1++;
//                break;
//            case 2:
//                num2++;
//                break;
//            case 3:
//                num3++;
//                break;
//            case 4:
//                num4++;
//                break;
//            case 5:
//                num5++;
//                break;
//            case 6:
//                num6++;
//                break;
//            case 7:
//                num7++;
//                break;
//            case 8:
//                num8++;
//                break;
//            case 9:
//                num9++;
//                break;
//            case 10:
//                num10++;
//                break;
//        }
    }

//    cout << setw(10) << "Number: ";
//    cout << setw(10) << "Rating: " << endl;
//    cout << setw(10) << "Number 1 : ";
//    cout << setw(10) << num1 << endl;
//    cout << setw(10) << "Number 2 : ";
//    cout << setw(10) << num2 << endl;
//    cout << setw(10) << "Number 3 : ";
//    cout << setw(10) << num3 << endl;
//    cout << setw(10) << "Number 4 : ";
//    cout << setw(10) << num4 << endl;
//    cout << setw(10) << "Number 5 : ";
//    cout << setw(10) << num5 << endl;
//    cout << setw(10) << "Number 6 : ";
//    cout << setw(10) << num6 << endl;
//    cout << setw(10) << "Number 7 : ";
//    cout << setw(10) << num7 << endl;
//    cout << setw(10) << "Number 8 : ";
//    cout << setw(10) << num8 << endl;
//    cout << setw(10) << "Number 9 : ";
//    cout << setw(10) << num9 << endl;
//    cout << setw(10) << "Number 10 :";
//    cout << setw(10) << num10 << endl;
    system("pause");
}
