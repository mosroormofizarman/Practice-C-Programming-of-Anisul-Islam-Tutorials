#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int num;
    cout << "Enter an integer number for Multiplication Table: ";
    cin >> num;

    cout << endl << endl;
    cout << "Multiplication Table of " << num << ": " << endl;
    for(int i=1; i<=10; i++)
    {
       cout << setw(30) << num << " X " << i << " = " << (num*i) << endl;
    }

    getch();
}

