#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch, ch1;

    cout << "Enter any letter: ";
    cin >> ch;

    ch1 = tolower(ch);

    switch(ch1)
    {
        case 'a':
        {
           cout << ch << " is vowel";
           break;
        }
        case 'e':
        {
           cout << ch << " is vowel";
           break;
        }
        case 'i':
        {
           cout << ch << " is vowel";
           break;
        }
        case 'o':
        {
           cout << ch << " is vowel";
           break;
        }
        case 'u':
        {
           cout << ch << " is vowel";
           break;
        }
        default:
        {
           cout << ch << " is consonant";
        }
    }

    getch();
}

