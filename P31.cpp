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

void FillArrayFrom1ToN(int arr[100], int &ArrLength)
{

    ArrLength = ReadPositiveNumber("Please enter a positive number:");

    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = i+1;
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
    int temp = Num1;
    Num1 = Num2;
    Num2 = temp;
}

void ShuffleArray(int arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        Swap(arr[RandomNumber(1, ArrLength) - 1], arr[RandomNumber(1, ArrLength) - 1]);
    }
}

int main()
{

    int arr[100], ArrLength;
    FillArrayFrom1ToN(arr, ArrLength);

    cout << "Array Elements Before Shuffle:" << endl;
    PrintArray(arr, ArrLength);
    cout << endl;

    ShuffleArray(arr, ArrLength);

    cout << "Array Elements After shuffle:" << endl;
    PrintArray(arr, ArrLength);

    return 0;
}

