#include <iostream>
#include <cstdlib>

using namespace std;

enum enCharType { SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, Digit = 4 };

int RandomNumber(int From, int To)
{

    return rand() % (To - From + 1) + From;

}

char GetRandomCharacter(enCharType CharType)
{

    if (CharType == enCharType::SmallLetter)
    {
        return char(RandomNumber(97, 122));
    }
    else if (CharType == enCharType::CapitalLetter)
    {
        return char(RandomNumber(65, 90));
    }
    else if (CharType == enCharType::SpecialCharacter)
    {
        return char(RandomNumber(33, 47));
    }
    else
    {
        return char(RandomNumber(48, 57));
    }
}

int main()
{

    srand((unsigned)time(NULL));

    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;

    return 0;
}

