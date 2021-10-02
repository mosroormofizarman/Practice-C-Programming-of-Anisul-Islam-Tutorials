#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    double farn, cels, kelvin;

    cout << "Enter celsius temperature: ";
    cin >> cels;

    farn = (cels * 1.8) + 32;

    kelvin = cels + 273;

    cout << "Temperature in Fahrenheit scale: " << farn << endl;
    cout << "Temperature in Kelvin scale: " << kelvin;

    getch();
}


