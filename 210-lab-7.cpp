//COMSC-210 | Lab 7 | Kristofer King
//IDE Used: VSC#include <iostream>
#include <iostream>

using namespace std;

//Prototype functions to reverse and display the dynamic arrays respectively
string* reverseArray(string* arr, int size);
void displayArray(string* arr, int size);

//setting the constant max size of the dynamic array
const int SIZE = 5;

int main()
{
    //initializing and declaring the dynamic array
    string *oArray = nullptr;
    oArray = new string[SIZE];

    cout << "Please enter 5 names:\n";
    
    //Requests user input on what names they wish to be included on both the original and the reveresed array
    for (int i = 0; i < SIZE; i++)
    {
        cout << "> Name #" << i << ": ";
        cin >> oArray[i];
    }

    //Calls the displayArray function to display the original array
    cout << "Original Array: ";
    displayArray(oArray, SIZE);
    cout << endl << endl;

    //Calls the reverseArray function to reverse the order of the original array inputted and returns it to main
    //Calls the displayArray function to display the now reveresed array
    cout << "Reversed Array: ";
    reverseArray(oArray, SIZE);
    displayArray(oArray, SIZE);
    cout << endl << endl;

    //deletes the values of the elements within the dynamic array
    delete [] oArray;
    return 0;
}

string* reverseArray(string* arr, int size)
{
    //initializes a temporary array to store values in order to reverse the order
    string tempArray[SIZE];

    //for loop that sets the last element in the temporary array to equal the initial element of the original array that was received
    for (int i = 0, j = 4; i < size, j >= 0; i++, j--) 
    {
       tempArray[j] = arr[i];
    }

    //for loop that sets the values of the initial array to equal those of the temporary array
    for (int i = 0; i < size; i++) 
    {
        arr[i] = tempArray[i];
    }

    return arr;
}

//function to display the values of the arrays in one organized line
void displayArray(string* arr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << "  ";
    }
}