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
        cout << "> Element #" << i << ": ";
        cin >> oArray[i];
    }

    cout << "Original array: ";
    displayArray(oArray, SIZE);
    cout << endl;

    reverseArray(oArray, SIZE);


}

void reverseArray(string* sArray, int size)
{
    
}

void displayArray(string* sArray, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << sArray[i] << "  ";
    }
}