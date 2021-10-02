#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x, y;

    cout << "Enter two integer numbers: ";
    cin >> x >> y;

    x+=y;
    cout << "First value of x: " << x << endl;

    x-=y;
    cout << "Second value of x: " << x << endl;

    x*=y;
    cout << "Third value of x: " << x << endl;

    x/=y;
    cout << "Fourth value of x: " << x << endl;

    x%=y;
    cout << "Fifth value of x: " << x << endl;



    getch();
}

