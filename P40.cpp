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

int FindNumberPositionInArray(int arr[100], int Number, int& ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] == Number)
            return i;
    }

    return -1;
}

bool IsNumberInArray(int arr[100], int Number, int& ArrLength)
{
    return FindNumberPositionInArray(arr, Number, ArrLength) != -1;
}

void CopyDistnictNumbersInArray(int arr1[100], int arr2[100], int ArrLength, int& ArrLength2)
{
    
    for (int i = 0; i < ArrLength; i++)
    {
        if (!IsNumberInArray(arr2, arr1[i], ArrLength2))
            AddArrayElement(arr1[i], arr2, ArrLength2);
    }

}

int main()
{
    int arr[] = {10, 10, 10, 50, 50, 70, 70, 70, 70, 90};
    int ArrLength = 10;

    int arr2[100], ArrLength2 = 0;

    CopyDistnictNumbersInArray(arr, arr2, ArrLength, ArrLength2);

    cout << "Array 1 Elements" << endl;
    PrintArray(arr, ArrLength);
    cout << endl;

    cout << "Array 2 Distnict Elements" << endl;
    PrintArray(arr2, ArrLength2);
    cout << endl;

    return 0;
}
