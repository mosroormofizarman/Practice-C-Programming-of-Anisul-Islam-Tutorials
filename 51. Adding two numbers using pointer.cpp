#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, *p1, *p2, sum;
    p1 = &num1;
    p2 = &num2;

    cout << "Enter the value of two integer numbers:  ";
    cin >> num1 >> num2;

    sum = *p1 + *p2;

    cout << endl << sum;

    getch();
}

