#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num;
    double num2;
    char ch;
    char name[20];

    cout << "Enter an integer number: ";

    cin >> num;

    cout << "Entered number is = " << num << endl;

    cout << "\nEnter a double number: ";

    cin >> num2;

    cout << "Entered number is = " << num2 << endl;

    cout << "\nEnter a character: ";

    cin >> ch;

    cout << "Entered character is = " << ch << endl;

    cout << "\nEnter your name: ";

    cin >> name;

    cout << "Welcome : " << name << endl;

    getch();
}

