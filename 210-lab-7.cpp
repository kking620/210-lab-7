#include <iostream>

using namespace std;

string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

const int SIZE = 5;

int main()
{
    string *oArray = nullptr;
    oArray = new string[SIZE];

    cout << "Please enter 5 names:\n";
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "> Name #" << i << ": ";
        cin >> oArray[i];
    }

    cout << "Original Array: ";
    displayArray(oArray, SIZE);
    cout << endl << endl;

    cout << "Reversed Array: ";
    reverseArray(oArray, SIZE);
    displayArray(oArray, SIZE);
    cout << endl << endl;

    delete [] oArray;
    return 0;
}

string* reverseArray(string* arr, int size)
{
    string tempArray[SIZE];

    for (int i = 0, j = 4; i < size, j >= 0; i++, j--) 
    {
       tempArray[j] = arr[i];
    }

    for (int i = 0; i < size; i++) 
    {
        arr[i] = tempArray[i];
    }

    return arr;
}

void displayArray(string* arr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << "  ";
    }
}