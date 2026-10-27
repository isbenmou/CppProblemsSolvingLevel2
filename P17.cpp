#include <iostream>

using namespace std;

string ReadPassword()
{

    string Password = "";

    cout << "Please enter the Password:" << endl;
    cin >> Password;

    return Password;
}

void GuessPassword(string Password)
{

    string Word = "";
    int Counter = 1;

    for (int a = 65; a <= 90; a++)
    {

        for (int b = 65; b <= 90; b++)
        {

            for (int c = 65; c <= 90; c++)
            {
                
                Word += char(a);
                Word += char(b);
                Word += char(c);

                cout << "Trial[" << Counter << "]: " << Word << endl;

                if (Word == Password)
                {
                    cout << "\n\nPassword Is " << Word << endl;
                    cout << "Found After " << Counter << " Triall(S)" << endl;
                    return;
                }

                Word = "";
                Counter++;
            }
        }
    }
}

int main()
{

    GuessPassword(ReadPassword());

    return 0;
}
