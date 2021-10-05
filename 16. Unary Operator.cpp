#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = 6;
    int result = -x;
    cout << result << endl;

    int y = x--;
    cout << x << endl;
    cout << y << endl;

    y = --x;
    cout << x << endl;
    cout << y << endl;

    y = x++;
    cout << x << endl;
    cout << y << endl;

    y = ++x;
    cout << x << endl;
    cout << y << endl;
    getch();
}
