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

int MyCeil(float Number)
{

    int IntPart = int(Number);

    if (abs(GetFractionPart(Number)) > 0)
    {
        if (Number > 0)
            return ++IntPart;
        else
            return IntPart;
    }
    else
        return IntPart;
}

int main()
{

    float Number = ReadNumber("Please enter a number");

    cout << "My ABS Result: " << MyCeil(Number) << endl;
    cout << "C++ ABS Result: " << ceil(Number) << endl;

    return 0;
}

