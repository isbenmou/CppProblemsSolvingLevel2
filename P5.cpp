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

void PrintDegets(int Number)
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

    PrintDegets(ReadPositiveNumber("Please enter a Number"));

}

