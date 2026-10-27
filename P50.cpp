#include <iostream>

using namespace std;

float ReadNumber(string message)
{

    float Number;

    cout << message << endl;
    cin >> Number;

    return Number;
}

int MySqrt(float Number)
{
    return pow(Number, 0.5);
}

int main()
{

    float Number = ReadNumber("Please enter a number");

    cout << "My Sqrt Result: " << MySqrt(Number) << endl;
    cout << "C++ Sqrt Result: " << sqrt(Number) << endl;

    return 0;
}

