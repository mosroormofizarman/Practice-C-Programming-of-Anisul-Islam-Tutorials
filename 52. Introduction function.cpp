#include <iostream>
#include <conio.h>

using namespace std;

void addition(int, int);
void subtraction(int, int);
void multiplication(int, int);
void division(int, int);

int main()
{
    int a, b;

    cout << "Enter two integer numbers:  ";
    cin >> a >> b;

    addition(a,b);
    cout << endl;
    subtraction(a,b);
    cout << endl;
    multiplication(a,b);
    cout << endl;
    division(a,b);
    getch();
}

void addition(int a, int b)
{
    cout << "Summation of two integer numbers:  " << a+b;
}

void subtraction(int a, int b)
{
    cout << "Summation of two integer numbers:  " << a-b;
}

void multiplication(int a, int b)
{
    cout << "Summation of two integer numbers:  " << a*b;
}

void division(int a, int b)
{
    cout << "Summation of two integer numbers:  " << a/b;
}
