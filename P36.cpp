#include <iostream>
#include <cstdlib>

using namespace std;

int ReadNumber(string message) 
{
    int Number = 0;

    cout << message << endl;
    cin >> Number;

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

void InputUserNumberInArray(int arr[100], int &ArrLength)
{

    bool AddMore = true;

    do
    {
        AddArrayElement(ReadNumber("Please enter a Number"), arr, ArrLength);
        cout << "Do You Want To Add More Numbers? No[0],Yes[1]" << endl;
        cin >> AddMore;
    } while (AddMore);

}

int main()
{

    int arr[100];
    int ArrLength = 0;

    InputUserNumberInArray(arr, ArrLength);

    cout << "Array Length: " << ArrLength << endl;
    cout << "Array Elements:";
    PrintArray(arr, ArrLength);

    return (0);
}
