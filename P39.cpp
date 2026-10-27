#include <iostream>
#include <cstdlib>

using namespace std;

enum enPrimeOrNotPrime { Prime = 1, NotPrime = 2 };

enPrimeOrNotPrime CheckPrimeNumber(int Number)
{

    for (int Count = 2; Count <= Number / 2; Count++)
    {
        if (Number % Count == 0)
            return enPrimeOrNotPrime::NotPrime;
    }

    return enPrimeOrNotPrime::Prime;
}

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

bool IsOddNumber(int Number)
{
    return (Number % 2 != 0);
}

void AddOnlyOddNumbersToNewArray(int arr1[100], int arr2[100], int ArrLength, int &Arr2Length)
{

    for (int i = 0; i < ArrLength; i++)
    {
        if (CheckPrimeNumber(arr1[i]) == enPrimeOrNotPrime::Prime)
            AddArrayElement(arr1[i], arr2, Arr2Length);
    }

}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], ArrLength = 0;
    FillArray(arr, ArrLength);
    cout << endl;

    int arr2[100], ArrLength2 = 0;
    AddOnlyOddNumbersToNewArray(arr, arr2, ArrLength, ArrLength2);

    cout << "Array 1 Elements" << endl;
    PrintArray(arr, ArrLength);
    
    cout << endl;

    cout << "Array 2 Odd Numbers" << endl;
    PrintArray(arr2, ArrLength2);

    return 0;
}
