#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double base, height, area, width, height1, area1, radius, area2;

    cout << "Enter triangle base: ";
    cin >> base;
    cout << "Enter triangle height: ";
    cin >> height;
    area = (double)1/2 * base * height;
    cout << "Area of triangle = " << area << endl;

    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter rectangle height: ";
    cin >> height1;
    area1 = width * height1;
    cout << "Area of rectangle = " << area1 << endl;

    cout << "Enter circle radius: ";
    cin >> radius;
    area2 = 3.1416 * radius * radius;
    cout << "Area of circle = " << area2 << endl;
    getch();
}

