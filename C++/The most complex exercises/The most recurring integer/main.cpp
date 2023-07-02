#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

void find_most_recurring(int *arr, int arraylength, int *num, int numlength); // Function prototype

int most_recurring_digits[10] = {0};

int main()
{
    char number[200];
    int found_length = 10;
    int num[found_length] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // Using all the numbers as search criteria
    int found_number[found_length] = {0};

    cout << "Enter the string to search: " << endl;
    cin.getline(number, 200);
    cout << "This is the most recurring number in " << number << endl;

    for (int i = 0; i < found_length; i++)
    {
        char *found = strchr(number, '0' + num[i]);
        while (found != nullptr)
        {
            found_number[i]++;
            found = strchr(found + 1, '0' + num[i]);
        }
    }

    for (int i = 0; i < found_length; i++)
    {
        cout << "The occurrence of " << num[i] << " is " << found_number[i] << endl;
    }

    find_most_recurring(found_number, found_length, num, found_length);

    system("pause");
    return 0;
}

void find_most_recurring(int arr[], int arraylength, int *num, int numlength)
{
    int most_recurring = 0;
    for (int i = 0; i < arraylength; i++)
    {
        if (arr[i] > arr[most_recurring])
        {
            most_recurring = i;
        }
    }
    cout << "The most recurring digits are: ";
    for (int i =0; i<arraylength; i++){
        if(arr[i] == arr[most_recurring]){
            cout << i << ", ";
        }
    }
    cout << endl;

}

