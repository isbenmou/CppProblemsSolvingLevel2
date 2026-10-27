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

    cout << "Please enter a Number" << endl;
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
    {
        arr[i] = RandomNumber(-100, 100);
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

int CountPositifeNumbersInArray(int arr[100], int ArrLength)
{

    int Counter = 0;

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] >= 0)
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

    cout << "Positife Numbers Count Is: " << CountPositifeNumbersInArray(arr, ArrLength) << endl;

    return 0;
}

