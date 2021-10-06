#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num1, num2, x, y, rem, gcd, lcm;

    cout << "Enter two integer numbers: ";
    cin >> num1 >> num2;

    x = num1;
    y = num2;



    while(y!=0)
    {
        rem = x%y;
        x = y;
        y = rem;
    }

    cout << endl << "GCD of " << num1 << " and " << num2 << " is: " << x;

    lcm = ((num1*num2)/x);

    cout << endl << "LCM of " << num1 << " and " << num2 << " is: " << lcm;
    getch();
}
