#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;

    if(num1>num2)
        cout << num1 << " is the largest number and " << num2 << " is the smallest number.";
    else if(num1<num2)
        cout << num2 << " is the largest number and " << num1 << " is the smallest number.";
    else
        cout << "The numbers are equal.";

    getch();
}

