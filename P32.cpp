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

void FillArrayWithRandomNumbers(int arr[100], int &ArrLength)
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

void Swap(int &Num1, int &Num2)
{

    int tmp = Num1;
    Num1 = Num2;
    Num2 = tmp;

}

void CopyReverseArray(int arr1[100], int arr2[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
        arr2[i] = arr1[ArrLength - 1 - i];
}

int main()
{

    int Arr[100], ArrLength;

    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "\nArray 1 elements:" << endl;
    PrintArray(Arr, ArrLength);
    cout << endl;

    int Arr2[100];

    CopyReverseArray(Arr, Arr2, ArrLength);

    cout << "Array 2 elements after copying array 1 in reversed order:" << endl;
    PrintArray(Arr2, ArrLength);

    return 0;
}

