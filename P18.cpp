#include <iostream>

using namespace std;

string ReadText()
{

    string Text = "";

    cout << "Please enter a Text:" << endl;
    cin >> Text;

    return Text;
}

string EncriptionText(string Text, short EncriptionKey)
{

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = ((int)Text[i] + EncriptionKey);
    }

    return Text;
}

string DecryptText(string Text, short EncriptionKey)
{

    for (int i = 0; i < Text.length(); i++)
    {
        Text[i] = ((int)Text[i] - EncriptionKey);
    }

    return Text;
}

int main()
{

    string Text = ReadText();
    string TextAfterEncription = EncriptionText(Text, 2);
    string TextAfterDecryption = DecryptText(TextAfterEncription, 2);

    cout << "\nText Before Encription : " << Text << endl;
    cout << "\nText After Encription : " << TextAfterEncription << endl;
    cout << "\nText After Decription : " << TextAfterDecryption << endl;

    return 0;
}

