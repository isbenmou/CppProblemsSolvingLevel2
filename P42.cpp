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

int CountOddNumbersInArray(int arr[100], int ArrLength)
{

    int Counter = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] % 2 != 0)
            Counter++;
    }

    return Counter;
}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], ArrLength;

    FillArray(arr, ArrLength);

    cout << "Array Elements: ";
    PrintArray(arr, ArrLength);
    cout << endl;

    cout << "Odd Number Count Is: " << CountOddNumbersInArray(arr, ArrLength) << endl;

    return 0;
}

