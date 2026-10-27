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

int MyABS(float Number)
{

    if (Number > 0)
        return Number;
    else
        return Number * -1;

}

int main()
{

    float Number = ReadNumber("Please enter a number");

    cout << "My ABS Result: " << MyABS(Number) << endl;
    cout << "C++ ABS Result: " << abs(Number) << endl;

    return 0;
}
