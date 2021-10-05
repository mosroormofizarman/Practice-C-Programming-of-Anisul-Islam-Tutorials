#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, x, y, sum;
    float f;
    double d;
    char ch;
    char name[20];

    int c = sizeof(a);
    int e = sizeof(f);
    int g = sizeof(d);
    int h = sizeof(ch);
    int i = sizeof(name);
    cout << c << endl;
    cout << e << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;

    sum = (x=20, y=10, sum=x+y);
    cout << sum;
    getch();
}
