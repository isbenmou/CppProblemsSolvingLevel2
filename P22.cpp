#include <iostream>

using namespace std;

int ReadPositiveNumber(string message)
{

    int Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

void ReadArray(int arr[100], int &ArrLength)
{

    cout << "Please enter number of elements in array" << endl;
    cin >> ArrLength;

    cout << "Enter array elements:" << endl << endl;

    for (int i = 0; i < ArrLength; i++)
    {
        string message = "Element [" + to_string(i) + "] : ";

        arr[i] = ReadPositiveNumber(message);
    }

}

void ArrayCount(int arr[100], int NumberWantToCheck, int ArrLength)
{

    int Count = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] == NumberWantToCheck)
            Count++;
    }

    cout << NumberWantToCheck << " is repeated " << Count << " time(s)" << endl;

}

void PrintArray(int arr[100], int ArrLength)
{

    cout << "Original array: ";

    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }

}

int main()
{

    int arr[100], ArrLength;

    ReadArray(arr, ArrLength);
    ArrayCount(arr, ReadPositiveNumber("\n\nEnter the number you want to check:"), ArrLength);
    PrintArray(arr, ArrLength);

    return 0;
}
