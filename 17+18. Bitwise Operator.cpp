#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a = 32, b = 12, c, d, e, f, g;

    c = a&b;
    d = a|b;
    e = a^b;
    f = a>>3;
    g = a<<3;

    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    getch();
}

