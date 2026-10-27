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

int ReadNumber(string message) 
{
    int Number = 0;

    cout << message << endl;
    cin >> Number;

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

bool IsNumberInArray(int arr[100], int Number, int &ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] == Number)
            return true;
    }
    
    return false;
}

void PrintArray(int arr[100], int ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl;

}

int main()
{

    srand((unsigned)time(NULL));

    int arr[100], arrLength;

    FillArray(arr, arrLength);
    PrintArray(arr, arrLength);

    cout << endl;

    int Number = ReadNumber("Please enter a number to search for?");

    cout << "Number You are looking for is: " << Number << endl;
    if (IsNumberInArray(arr, Number, arrLength))
        cout << "Yes, The Number is Found :-)" << endl;
    else
        cout << "No, The Number is Not Found :-(" << endl;
}

