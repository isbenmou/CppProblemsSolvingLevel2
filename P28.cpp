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

int RandomNumber(int From, int To)
{

    return rand() % (To - From + 1) + From;

}

void FillArray(int arr[100], int &ArrLength)
{

    ArrLength = ReadPositiveNumber("Please enter a positive number:");

    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(1, 100);
    }

}

void PrintArray(int arr[100], int ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl;

}

void CopyArray(int arr1[100], int arr2[100], int ArrLength)
{
    
    for (int i = 0; i < ArrLength; i++)
        arr2[i] = arr1[i];
}

int main()
{

    srand((unsigned int)time(NULL));

    int arr1[100], arr2[100], ArrLength;

    FillArray(arr1, ArrLength);
    
    cout << "Array 1 elements:" << endl;
    PrintArray(arr1, ArrLength);
    cout << endl;

    CopyArray(arr1, arr2, ArrLength);

    cout << "Array 2 elements after copy:" << endl;
    PrintArray(arr1, ArrLength);

    return 0;
}

