#include <iostream>

using namespace std;

void PrintAllWordsFromAAAToZZZ()
{

    for (int a = 65; a <= 90; a++)
    {

        for (int b = 65; b <= 90; b++)
        {

            for (int c = 65; c <= 90; c++)
            {
                
                cout << char(a);
                cout << char(b);
                cout << char(c) << endl;

            }
        }
    }
}

int main()
{

    PrintAllWordsFromAAAToZZZ();
    
    return 0;
}

