#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, num3, sum, sub, mul, div, rem;
    double div1;
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2;
    cout << "Sum is: " << sum << endl;

    sub = num1 - num2;
    cout << "Subtraction is: " << sub << endl;

    mul = num1 * num2;
    cout << "Multiplication is: " << mul << endl;

    div = num1 / num2;
    cout << "Division is: " << div << endl;

    rem = num1 % num2;
    cout << "Remainder is: " << rem << endl;

    div1 = (float) num3 / num2; //type casting
    cout << "Division2 is: " << div1 << endl;
    getch();
}

