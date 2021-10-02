#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    float num1, num2, num3, sum, sub, mul, div;
    double div1;
    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << showpoint;

    sum = num1 + num2;
    cout << setw(20) << "Sum is: " << sum << endl;

    cout << noshowpoint;

    sub = num1 - num2;
    cout << setw(20) << "Subtraction is: " << sub << endl;

    cout << showpoint;
    cout << setprecision(10);

    mul = num1 * num2;
    cout << setw(20) << "Multiplication is: " << mul << endl;

    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);

    div = num1 / num2;
    cout << setw(20) << "Division is: " << div << endl;

    div1 = (float) num3 / num1; //type casting
    cout << setw(20) << "Division2 is: " << div1 << endl;
    getch();
}


