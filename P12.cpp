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

void InvertedPattern(int Number)
{

    for (;Number > 0; Number--)
    {

        for (int i = 1; i <= Number; i++)
            cout << Number;
        cout << endl;

    }

}

int main()
{

    InvertedPattern(ReadPositiveNumber("Please enter a Positive Number:"));

    return 0;
}

