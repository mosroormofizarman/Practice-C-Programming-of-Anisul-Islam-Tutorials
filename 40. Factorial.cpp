#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int num, fact=1;
    cout << "Enter any positive number: ";
    cin >> num;

    for(int i=num; i>=1; --i)
    {
        fact *= i;
    }
    cout << "Factorial of " << num << ": " << fact;
    getch();
}
