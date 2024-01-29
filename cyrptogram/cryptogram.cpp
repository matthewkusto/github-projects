#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    const string ALPHABET = "abcdefghijklmnopqrstuvwxyz";
    const string CODE = "bcdefghijklmnopqrstuvwxyza";
    string word;
    char ch;
    int pos;

    cout << "Enter a Word: ";
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        ch = tolower(word.at(i));
        pos = ALPHABET.find(ch);
        if ((pos >= 0) && (pos < 26))
        {
            word[i] = CODE.at(pos);
        }
    }
    cout << "The Cryptogram is: " << word << endl;

    return 0;
}