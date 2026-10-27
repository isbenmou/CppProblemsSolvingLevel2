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

int DigitCount(int Number, int DigitToCheck)
{
    
    int Remainder = 0;
    int Counter = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        if (Remainder == DigitToCheck)
            Counter += 1;
    }

    return Counter;
}

void PrintAllDigitsFreq(int Number)
{

    for (int i = 0; i < 10; i++)
    {

        short DigitFreq = DigitCount(Number, i);

        if (DigitFreq > 0)
            cout << "Digit " << i << "Frequency is " << DigitFreq << "Time(s)." << endl;
        
    }

}

int main()
{

    int Number = ReadPositiveNumber("Please enter a Positive Number:");
    PrintAllDigitsFreq(Number);

    return 0;
}

