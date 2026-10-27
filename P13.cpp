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

    for (int i = 1; i <= Number; i++)
    {

        for (int j = 0; j < i ; j++)
            cout << i;
        cout << endl;

    }

}

int main()
{

    InvertedPattern(ReadPositiveNumber("Please enter a Positive Number:"));

    return 0;
}

