#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{

    float Number = 0;

    do
    {

        cout << message << endl;
        cin >> Number;

    } while (Number <= 0);

    return Number;
}

bool isDivesor(int Number1, int Number2)
{

    return (Number1 % Number2 == 0);

}


bool isPerfect(int Number)
{

    int Sum = 0;
    int M = round(Number / 2);

    for (int i = 1; i <= M; i++)
    {
        if (isDivesor(Number, i))
            Sum += i;
    }

    return (Sum == Number);
}

void PrintResult(int Number)
{
    
    if (isPerfect(Number))
        cout << Number << " Is Perfect Number" << endl;
    else
        cout << Number << " Is Not Perfect Number" << endl;

}

int main()
{

    PrintResult(ReadPositiveNumber("Please Enter A Positive Number:"));

    return 0;
}

