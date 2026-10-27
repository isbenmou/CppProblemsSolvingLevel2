#include <iostream>

using namespace std;

void PrintArray(int arr[100], int ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        cout << " " << arr[i];
    }

    cout << endl;

}

bool IsPalindromArray(int arr[100], int ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
    {
        if (arr[i] == arr[ArrLength - 1 - i])
            return false;
    }

    return true;
}

int main()
{
    int arr[] = { 1, 2, 3, 1};
    int ArrLength = 10;

    if (IsPalindromArray(arr, ArrLength))
        cout << "Yes Is Palindrom Array." << endl;
    else
        cout << "Is Not Palindrom Array." << endl;

    return 0;
}
