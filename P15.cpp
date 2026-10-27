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

void InvertedLetterPattern(int Number)
{

    for (char i = 'A' ; i <= 'A' + Number; i++)
    {

        for (char j = 'A'; j < i; j++)
            cout << char(i - 1);

        cout << endl;

    }

}

int main()
{

    InvertedLetterPattern(ReadPositiveNumber("Please enter a Positive Number:"));

    return 0;
}
