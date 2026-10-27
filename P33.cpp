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

string GetWord(int WordLength)
{

    string Word = "";

    for (int i = 1; i <= WordLength; i++)
        Word += RandomNumber(65, 90);

    return Word;
}

string GetKey()
{

    string Key = "";

    for (int i = 1; i <= 4; i++)
    {
        Key += GetWord(4);
        if (i != 4)
            Key += '-';
    }

    return Key;
}

void FillArrayWithKeys(string arr[100], int &ArrLength)
{

    cout << "How many keys?" << endl;
    cin >> ArrLength;

    for (int i = 0; i < ArrLength; i++)
        arr[i] = GetKey();

}

void PrintArray(string arr[100], int ArrLength)
{

    for (int i = 0; i < ArrLength; i++)
        cout << "Arr[" << i << "] : " << arr[i] << endl;

}

int main()
{

    srand((unsigned)time(NULL));

    string arr[100];
    int ArrLength;

    FillArrayWithKeys(arr, ArrLength);
    PrintArray(arr, ArrLength);

    return 0;
}

