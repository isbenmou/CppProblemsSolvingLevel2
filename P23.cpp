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

    cout << "Array Elements: ";

    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }

}

int main()
{

    srand((unsigned int)time(NULL));

    int arr[100], ArrLength;

    FillArray(arr, ArrLength);
    PrintArray(arr, ArrLength);

    return 0;
}

