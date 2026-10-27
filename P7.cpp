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

int SumDigits(int Number)
{
    
    int Remainder = 0;
    int Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        Sum += Remainder;
    }

    return Sum;
}

void PrintResult(int Result)
{

    cout << "\n Sum Of Digits is " << Result << endl;

}

int main()
{

    PrintResult(SumDigits((ReadPositiveNumber("Please enter a Number"))));

}
