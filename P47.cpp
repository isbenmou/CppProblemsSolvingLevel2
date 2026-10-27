#include <iostream>
#include <cmath>

using namespace std;

float ReadNumber(string message)
{

    float Number;

    cout << message << endl;
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

int MyRound(float Number)
{
    
    int IntPart = int(Number);
    float FractionPart = GetFractionPart(Number);

    if (abs(FractionPart) >= .5)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return --IntPart;
    }
    else
        return IntPart;

}

int main()
{

    float Number = ReadNumber("Please enter a number");

    cout << "My ABS Result: " << MyRound(Number) << endl;
    cout << "C++ ABS Result: " << round(Number) << endl;

    return 0;
}
