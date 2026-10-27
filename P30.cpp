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

void SumOfArray1AndArray2(int Arr1[100], int Arr2[100], int Arr3[100], int Length, int &Arr3Length)
{

    for (; Arr3Length < Length; Arr3Length++)
    {
        Arr3[Arr3Length] = Arr1[Arr3Length] + Arr2[Arr3Length];
    }

}

int main()
{

    srand((unsigned int)time(NULL));

    int Arr1[100], Arr1Length;
    FillArray(Arr1, Arr1Length);

    int Arr2[100], Arr2Length;
    FillArray(Arr2, Arr2Length);

    cout << "Array 1 elements:" << endl;
    PrintArray(Arr1, Arr1Length);

    cout << "Array 2 elements:" << endl;
    PrintArray(Arr2, Arr2Length);

    int Arr3[100], Arr3Length = 0;

    SumOfArray1AndArray2(Arr1, Arr2, Arr3, Arr1Length, Arr3Length);

    cout << "Sum Of Array1 and Array2 elements:" << endl;
    PrintArray(Arr3, Arr3Length);

    return 0;
}
