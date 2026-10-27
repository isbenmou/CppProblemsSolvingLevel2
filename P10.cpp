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

int ReverseNumber(int Number1)
{

    int Remainder = 0, Number2 = 0;

    while (Number1 > 0)
    {

        Remainder = Number1 % 10;
        Number1 /= 10;
        Number2 = Number2 * 10 + Remainder;

    }

    return Number2;
}

void PrintDigits(int Number)
{

    int Remainder = 0;

    while (Number > 0)
    {

        Remainder = Number % 10;
        Number /= 10;
        cout << Remainder << endl;

    }

}

int main()
{

    PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a Positive Number:")));

    return 0;
}
