#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, *p;
    p = &x;

    cout << "Enter an integer number:  ";
    cin >> x;

    cout << x << endl;
    cout << &x << endl;
    cout << p << endl;
    cout << *p << endl;

    getch();
}
