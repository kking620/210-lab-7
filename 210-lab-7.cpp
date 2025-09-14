#include <iostream>

using namespace std;

void reverseArray(string* sArray, int size);
void displayArray(string* sArray, int size);

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
    cout << endl << endl;

    delete [] oArray;
    return 0;
}

void reverseArray(string* sArray, int size)
{
    string tempArray[SIZE];

    for (int i = 0, j = 5; i < size, j > 0; i++, j--) 
    {
       tempArray[j] = sArray[i];
    }

    for (int i = 0; i < size; i++) 
    {
        sArray[i] = tempArray[i];
    }

}

void displayArray(string* sArray, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << sArray[i] << "  ";
    }
}