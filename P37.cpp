#include <iostream>
#include <cstdlib>

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

void FillArray(int arr[100], int& ArrLength)
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

void AddArrayElement(int Number, int arr[100], int& ArrLength)
{

    arr[ArrLength] = Number;
    ArrLength++;

}

void ArrayCopy(int arr1[100], int arr2[100], int ArrLength, int &Arr2Length)
{

    for (;Arr2Length < ArrLength;)
        AddArrayElement(arr1[Arr2Length], arr2, Arr2Length);

}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], ArrLength = 0;

    FillArray(arr, ArrLength);

    cout << "Array Elements:" << endl;
    PrintArray(arr, ArrLength);

    int arr2[100], ArrLength2 = 0;
    ArrayCopy(arr, arr2, ArrLength, ArrLength2);

    cout << "Array 2 Elements After Copy:" << endl;
    PrintArray(arr2, ArrLength2);

    return (0);
}

