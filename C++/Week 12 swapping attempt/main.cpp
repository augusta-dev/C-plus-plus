#include <iostream>

using namespace std;

void swap_array (int array_of_elements);

int main()
{
    int array_of_numbers[5] = {5, 9, 1, 6, 19};
    swap_array(array_of_numbers);
    cout << "Hello world!" << endl;
    return 0;
}

void swap_array(int array_of_elements){
    int mini = 0;
    for(int i = 1; ; i++){
       if (i <= mini){
        array_of_elements[i] = mini;
       }
       cout array_of_elements[i];
    }


}
