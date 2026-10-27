#include <iostream>

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

bool isPrime(enPrimeOrNotPrime Number)
{
    return (Number == enPrimeOrNotPrime::Prime);
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

void CopyOnlyPrimeNumberInArray(int arr1[100], int arr2[100], int Arr1Length, int &Arr2Length)
{
    for (int i = 0; i < Arr1Length; i++)
    {
        if (isPrime(CheckPrimeNumber(arr1[i])) == true)
        {
            arr2[Arr2Length] = arr1[i];
            Arr2Length++;
        }
    }
}

int main()
{

    srand((unsigned int)time(NULL));

    int arr1[100], arr2[100], ArrLength;
    int Arr2Length = 0;

    FillArray(arr1, ArrLength);
    
    cout << "Array 1 elements:" << endl;
    PrintArray(arr1, ArrLength);
    cout << endl;

    CopyOnlyPrimeNumberInArray(arr1, arr2, ArrLength, Arr2Length);

    cout << "Prime Numbers in array2:" << endl;
    PrintArray(arr2, Arr2Length);

    return 0;
}

